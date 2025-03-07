#pragma once
#ifndef STATUSEFFECT_H
#define STATUSEFFECT_H

#include <string>

namespace StatusEffects {

enum class Type {
    Bleeding,
    BoneBreak,
    Tired,
    Poison,
    Burning,
    Illness,
    Exhaustion,
    Sanity
};

class StatusEffect {
public:
    StatusEffect(Type type, double severity, double duration);
    virtual ~StatusEffect();

    Type getType() const;
    double getSeverity() const;
    double getDuration() const;
    // update the status effect over a time interval (dt in seconds)
    void update(double deltaTime);

private:
    Type type;
    double severity;
    double duration;
};

} // namespace StatusEffects

#endif // STATUSEFFECT_H
