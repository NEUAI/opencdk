//
// Created by 艾峥鹏 on 2021/8/16.
//

#include "Math.h"
#include <cmath>
#include <java/lang/StrictMath.h>

const double Math::E = 2.7182818284590452354;
const double Math::PI = 3.14159265358979323846;

double Math::abs(double a) {
    return (a <= 0.0) ? 0.0 - a : a;
}

float Math::abs(float a) {
    return (a <= 0.0f) ? 0.0f - a : a;
}

int32_t Math::abs(int32_t a) {
    return (a < 0) ? -a : a;
}

int64_t Math::abs(int64_t a) {
    return (a < 0) ? -a : a;
}

double Math::acos(double a) {
    return StrictMath::acos(a);
}

int32_t Math::addExact(int32_t x, int32_t y) { // todo
    return 0;
}

int64_t Math::addExact(int64_t x, int64_t y) { // todo
    return 0;
}

double Math::asin(double a) {
    return StrictMath::asin(a);
}

double Math::atan(double a) {
    return StrictMath::atan(a);
}

double Math::atan2(double y, double x) {
    return StrictMath::atan2(y, x);
}

double Math::cbrt(double a) {
    return StrictMath::cbrt(a);
}

double Math::ceil(double a) {
    return StrictMath::ceil(a);
}

double Math::copySign(double magnitude, double sign) { // todo
    return 0;
}

float Math::copySign(float magnitude, float sign) { // todo
    return 0;
}

double Math::cos(double a) {
    return StrictMath::cos(a);
}

double Math::cosh(double x) {
    return StrictMath::cosh(x);
}

int32_t Math::decrementExact(int32_t a) { // todo
    return 0;
}

int64_t Math::decrementExact(int64_t a) { // todo
    return 0;
}

double Math::exp(double a) {
    return StrictMath::exp(a);
}

double Math::expm1(double x) {
    return StrictMath::expm1(x);
}

double Math::floor(double a) {
    return StrictMath::floor(a);
}

int32_t Math::floorDiv(int32_t x, int32_t y) {
    int32_t r = x / y;
    // if the signs are different and modulo not zero, round down
    if ((x ^ y) < 0 && (r * y != x))
        r--;
    return r;
}

int64_t Math::floorDiv(int64_t x, int64_t y) {
    int64_t r = x / y;
    // if the signs are different and modulo not zero, round down
    if ((x ^ y) < 0 && (r * y != x))
        r--;
    return r;
}

int32_t Math::floorMod(int32_t x, int32_t y) {
    int32_t r = x - floorDiv(x, y) * y;
    return r;
}

int64_t Math::floorMod(int64_t x, int64_t y) {
    return x - floorDiv(x, y) * y;
}

int32_t Math::getExponent(double d) { // todo
    return 0;
}

int32_t Math::getExponent(float f) { // todo
    return 0;
}

double Math::hypot(double x, double y) {
    return StrictMath::hypot(x, y);
}

double Math::IEEEremainder(double f1, double f2) {
    return StrictMath::IEEEremainder(f1, f2);
}

int32_t Math::incrementExact(int32_t a) { // todo
    return 0;
}

int64_t Math::incrementExact(int64_t a) { // todo
    return 0;
}

double Math::log(double a) {
    return StrictMath::log(a);
}

double Math::log10(double a) {
    return StrictMath::log10(a);
}

double Math::log1p(double x) {
    return StrictMath::log1p(x);
}

double Math::max(double a, double b) { // todo
    return 0;
}

float Math::max(float a, float b) { // todo
    return 0;
}

int32_t Math::max(int32_t a, int32_t b) {
    return (a >= b) ? a : b;
}

int64_t Math::max(int64_t a, int64_t b) {
    return (a >= b) ? a : b;
}

double Math::min(double a, double b) { // todo
    return 0;
}

float Math::min(float a, float b) { // todo
    return 0;
}

int32_t Math::min(int32_t a, int32_t b) {
    return (a <= b) ? a : b;
}

int64_t Math::min(int64_t a, int64_t b) {
    return (a <= b) ? a : b;
}

int32_t Math::multiplyExact(int32_t x, int32_t y) { // todo
    return 0;
}

int64_t Math::multiplyExact(int64_t x, int64_t y) { // todo
    return 0;
}

int32_t Math::negateExact(int32_t a) { // todo
    return 0;
}

int64_t Math::negateExact(int64_t a) { // todo
    return 0;
}

double Math::nextAfter(double start, double direction) { // todo
    return 0;
}

float Math::nextAfter(float start, double direction) { // todo
    return 0;
}

double Math::nextDown(double d) { // todo
    return 0;
}

float Math::nextDown(float f) { // todo
    return 0;
}

double Math::nextUp(double d) { // todo
    return 0;
}

float Math::nextUp(float f) { // todo
    return 0;
}

double Math::pow(double a, double b) {
    return StrictMath::pow(a, b);
}

double Math::random() { // todo
    return 0;
}

double Math::rint(double a) {
    return StrictMath::rint(a);
}

int64_t Math::round(double a) { // todo
    return 0;
}

int32_t Math::round(float a) { // todo
    return 0;
}

double Math::scalb(double d, int32_t scaleFactor) { // todo
    return 0;
}

float Math::scalb(float f, int32_t scaleFactor) { // todo
    return 0;
}

double Math::signum(double d) { // todo
    return 0;
}

float Math::signum(float f) { // todo
    return 0;
}

double Math::sin(double a) {
    return StrictMath::sin(a);
}

double Math::sinh(double x) {
    return StrictMath::sinh(x);
}

double Math::sqrt(double a) {
    return StrictMath::sqrt(a);
}

int32_t Math::subtractExact(int32_t x, int32_t y) { // todo
    return 0;
}

int64_t Math::subtractExact(int64_t x, int64_t y) { // todo
    return 0;
}

double Math::tan(double a) {
    return StrictMath::tan(a);
}

double Math::tanh(double x) {
    return StrictMath::tanh(x);
}

double Math::toDegrees(double angrad) {
    return angrad * 180.0 / PI;
}

int32_t Math::toIntExact(int64_t value) { // todo
    return 0;
}

double Math::toRadians(double angdeg) {
    return angdeg / 180.0 * PI;
}

double Math::ulp(double d) { // todo
    return 0;
}

float Math::ulp(float f) { // todo
    return 0;
}
