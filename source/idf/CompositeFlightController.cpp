#include "idf/CompositeFlightController.hh"
#include "idf/Utils.hh"
#include <algorithm>

namespace idf {

double CompositeFlightController::getCommandedRoll() const {
    return bound(accumulate(&FlightController::getRoll, std::plus<double>()));
}

double CompositeFlightController::getCommandedPitch() const {
    return bound(accumulate(&FlightController::getPitch, std::plus<double>()));
}

double CompositeFlightController::getCommandedYaw() const {
    return bound(accumulate(&FlightController::getYaw, std::plus<double>()));
}

double CompositeFlightController::getCommandedX() const {
    return bound(accumulate(&FlightController::getX, std::plus<double>()));
}

double CompositeFlightController::getCommandedY() const {
    return bound(accumulate(&FlightController::getY, std::plus<double>()));
}

double CompositeFlightController::getCommandedZ() const {
    return bound(accumulate(&FlightController::getZ, std::plus<double>()));
}

}
