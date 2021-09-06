//
// Created by 艾峥鹏 on 2021/8/16.
//

#include "StrictMath.h"
#include <cmath>
#include <java/lang/Math.h>

const double StrictMath::E = 2.7182818284590452354;
const double StrictMath::PI = 3.14159265358979323846;

double StrictMath::abs(double a) {
    return Math::abs(a);
}

float StrictMath::abs(float a) {
    return Math::abs(a);
}

int32_t StrictMath::abs(int32_t a) {
    return Math::abs(a);
}

int64_t StrictMath::abs(int64_t a) {
    return Math::abs(a);
}

double StrictMath::acos(double a) {
    return std::acos(a);
}

int32_t StrictMath::addExact(int32_t x, int32_t y) {
    return Math::addExact(x, y);
}

int64_t StrictMath::addExact(int64_t x, int64_t y) {
    return Math::addExact(x, y);
}

double StrictMath::asin(double a) {
    return std::asin(a);
}

double StrictMath::atan(double a) {
    return std::atan(a);
}

double StrictMath::atan2(double y, double x) {
    return std::atan2(y, x);
}

double StrictMath::cbrt(double a) {
    return std::cbrt(a);
}

double StrictMath::ceil(double a) { // todo
    return 0;
}

double StrictMath::copySign(double magnitude, double sign) { // todo
    return 0;
}

float StrictMath::copySign(float magnitude, float sign) { // todo
    return 0;
}

double StrictMath::cos(double a) {
    return std::cos(a);
}

double StrictMath::cosh(double x) {
    return std::cosh(x);
}

double StrictMath::exp(double a) {
    return std::exp(a);
}

double StrictMath::expm1(double x) {
    return std::expm1(x);
}

double StrictMath::floor(double a) { // todo
    return 0;
}

int32_t StrictMath::floorDiv(int32_t x, int32_t y) {
    return Math::floorDiv(x, y);
}

int64_t StrictMath::floorDiv(int64_t x, int64_t y) {
    return Math::floorDiv(x, y);
}

int32_t StrictMath::floorMod(int32_t x, int32_t y) {
    return Math::floorMod(x, y);
}

int64_t StrictMath::floorMod(int64_t x, int64_t y) {
    return Math::floorMod(x, y);
}

int32_t StrictMath::getExponent(double d) {
    return Math::getExponent(d);
}

int32_t StrictMath::getExponent(float f) {
    return Math::getExponent(f);
}

double StrictMath::hypot(double x, double y) {
    return std::hypot(x, y);
}

double StrictMath::IEEEremainder(double f1, double f2) {
    return std::remainder(f1, f2);
}

double StrictMath::log(double a) {
    return std::log(a);
}

double StrictMath::log10(double a) {
    return std::log10(a);
}

double StrictMath::log1p(double x) {
    return std::log1p(x);
}

double StrictMath::max(double a, double b) {
    return Math::max(a, b);
}

float StrictMath::max(float a, float b) {
    return Math::max(a, b);
}

int32_t StrictMath::max(int32_t a, int32_t b) {
    return Math::max(a, b);
}

int64_t StrictMath::max(int64_t a, int64_t b) {
    return Math::max(a, b);
}

double StrictMath::min(double a, double b) {
    return Math::min(a, b);
}

float StrictMath::min(float a, float b) {
    return Math::min(a, b);
}

int32_t StrictMath::min(int32_t a, int32_t b) {
    return Math::min(a, b);
}

int64_t StrictMath::min(int64_t a, int64_t b) {
    return Math::min(a, b);
}

int32_t StrictMath::multiplyExact(int32_t x, int32_t y) {
    return Math::multiplyExact(x, y);
}

int64_t StrictMath::multiplyExact(int64_t x, int64_t y) {
    return Math::multiplyExact(x, y);
}

double StrictMath::nextAfter(double start, double direction) {
    return Math::nextAfter(start, direction);
}

float StrictMath::nextAfter(float start, double direction) {
    return Math::nextAfter(start, direction);
}

double StrictMath::nextDown(double d) {
    return Math::nextDown(d);
}

float StrictMath::nextDown(float f) {
    return Math::nextDown(f);
}

double StrictMath::nextUp(double d) {
    return Math::nextUp(d);
}

float StrictMath::nextUp(float f) {
    return Math::nextUp(f);
}

double StrictMath::pow(double a, double b) {
    return std::pow(a, b);
}

double StrictMath::random() { // todo
    return 0;
}

double StrictMath::rint(double a) {
    auto twoToThe52 = (double)(1L << 52); // 2^52
    double sign = Math::copySign(1.0, a); // preserve sign info
    a = Math::abs(a);
    if (a < twoToThe52) // E_min <= ilogb(a) <= 51
        a = ((twoToThe52 + a ) - twoToThe52);
    return sign * a; // restore original sign
}

int64_t StrictMath::round(double a) {
    return Math::round(a);
}

int32_t StrictMath::round(float a) {
    return Math::round(a);
}

double StrictMath::scalb(double d, int32_t scaleFactor) {
    return Math::scalb(d, scaleFactor);
}

float StrictMath::scalb(float f, int32_t scaleFactor) {
    return Math::scalb(f, scaleFactor);
}

double StrictMath::signum(double d) {
    return Math::signum(d);
}

float StrictMath::signum(float f) {
    return Math::signum(f);
}

double StrictMath::sin(double a) {
    return std::sin(a);
}

double StrictMath::sinh(double x) {
    return std::sinh(x);
}

double StrictMath::sqrt(double a) {
    return std::sqrt(a);
}

int32_t StrictMath::subtractExact(int32_t x, int32_t y) {
    return Math::subtractExact(x, y);
}

int64_t StrictMath::subtractExact(int64_t x, int64_t y) {
    return Math::subtractExact(x, y);
}

double StrictMath::tan(double a) {
    return std::tan(a);
}

double StrictMath::tanh(double x) {
    return std::tanh(x);
}

double StrictMath::toDegrees(double angrad) {
    return angrad * 180.0 / PI;
}

int32_t StrictMath::toIntExact(int64_t value) {
    return Math::toIntExact(value);
}

double StrictMath::toRadians(double angdeg) {
    return angdeg / 180.0 * PI;
}

double StrictMath::ulp(double d) {
    return Math::ulp(d);
}

float StrictMath::ulp(float f) {
    return Math::ulp(f);
}
