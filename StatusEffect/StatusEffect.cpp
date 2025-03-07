#include "StatusEffect.hpp"

namespace StatusEffects {

StatusEffect::StatusEffect(Type type, double severity, double duration)
    : type(type), severity(severity), duration(duration) {
}

StatusEffect::~StatusEffect() {
}

Type StatusEffect::getType() const {
    return type;
}

double StatusEffect::getSeverity() const {
    return severity;
}

double StatusEffect::getDuration() const {
    return duration;
}

void StatusEffect::update(double deltaTime) {
    duration -= deltaTime;
}

} // namespace StatusEffects
