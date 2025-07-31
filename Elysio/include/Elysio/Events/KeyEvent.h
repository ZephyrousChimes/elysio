//
// Created by kronos on 7/30/25.
//

#pragma once

#include <sstream>

#include "Elysio/Core/KeyCodes.h"
#include "Elysio/Events/Event.h"

namespace Elysio
{
class KeyEvent : public Event
{
   public:
    KeyCode GetKeyCode() const
    {
        return m_KeyCode;
    }

    EVENT_CLASS_CATEGORY(EventCategoryKeyboard | EventCategoryInput)
   protected:
    KeyEvent(const KeyCode keyCode) : m_KeyCode(keyCode) {}

    KeyCode m_KeyCode;
};

class KeyPressedEvent : public KeyEvent
{
   public:
    KeyPressedEvent(const KeyCode keyCode, bool isRepeat = false)
        : KeyEvent(keyCode), m_IsRepeat(isRepeat)
    {
    }

    bool IsRepeat() const
    {
        return m_IsRepeat;
    }

    std::string ToString() const override
    {
        std::stringstream ss;
        ss << "KeyPressedEvent: " << m_KeyCode << " (" << m_IsRepeat << ")";
        return ss.str();
    }

    EVENT_CLASS_TYPE(KeyPressed)
   private:
    bool m_IsRepeat;
};

class KeyReleasedEvent : public KeyEvent
{
   public:
    KeyReleasedEvent(const KeyCode keyCode) : KeyEvent(keyCode) {}

    std::string ToString() const override
    {
        std::stringstream ss;
        ss << "KeyReleasedEvent: " << m_KeyCode;
        return ss.str();
    }

    EVENT_CLASS_TYPE(KeyReleased)
};

class KeyTypedEvent : public KeyEvent
{
   public:
    KeyTypedEvent(const KeyCode keyCode) : KeyEvent(keyCode) {}
    std::string ToString() const override
    {
        std::stringstream ss;
        ss << "KeyTypedEvent: " << m_KeyCode;
        return ss.str();
    }

    EVENT_CLASS_TYPE(KeyTyped)
};
}  // namespace Elysio
