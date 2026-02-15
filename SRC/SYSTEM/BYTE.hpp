#pragma once
#include <iostream>
#include <string>
#include <cstdint>

class byte{
    private:
        int8_t value;
    public:
        //конструкторы и деструкторы 
        byte(){}
        ~byte(){}
        //операторы присваивания
         byte& operator= (const byte &VAL) {
          value = VAL.value;
            return *this;
        }
        byte& operator=(int v) {
            value = static_cast<int8_t>(v);
            return *this;
        }
        byte& operator=(long v) {
            value = static_cast<int8_t>(v);
            return *this;
        }
        byte& operator=(long long v) {
            value = static_cast<int8_t>(v);
            return *this;
        }
        byte& operator=(short v) {
            value = static_cast<int8_t>(v);
            return *this;
        }
        byte& operator=(float v) {
            value = static_cast<int8_t>(v);
            return *this;
        }
        byte& operator=(double v) {
            value = static_cast<int8_t>(v);
            return *this;
        }
        byte& operator=(const std::string str) {
            int numder = std::stoi(str);
            value = static_cast<int8_t>(numder);
            return *this;
        }
        //логические операторы 
        bool operator== (const byte &VAL) const {
            return value == VAL.value;
        }
        bool operator!= (const byte &VAL) const {
            return value != VAL.value;
        }
        bool operator< (const byte &VAL) const {
            return value < VAL.value;
        }
        bool operator> (const byte &VAL) const {
            return value > VAL.value;
        }
        bool operator<= (const byte &VAL) const {
            return value <= VAL.value;
        }
        bool operator>= (const byte &VAL) const {
            return value >= VAL.value;
        }
        //операторы + - * /
        byte operator+ (const byte &VAL) const {
            return byte(value + VAL.value);
        }
        byte operator- (const byte &VAL) const {
            return byte(value - VAL.value);
        }
        byte operator* (const byte &VAL) const {
            return byte(value * VAL.value);
        }
        byte operator/ (const byte &VAL) const {
            return byte(value / VAL.value);
        }
        //сокращенные операторы присваивания
        byte& operator+= (const byte &VAL){
            value += VAL.value;
            return *this;
        }
        byte& operator-= (const byte &VAL){
            value -= VAL.value;
            return *this;
        }
        byte& operator*= (const byte &VAL){
            value *= VAL.value;
            return *this;
        }
        byte& operator/= (const byte &VAL){
            value /= VAL.value;
            return *this;
        }
        //Префиксы и постфиксы
        // Префикс
        byte& operator++() { ++value; return *this; }
        byte& operator--() { --value; return *this; }
        // Постфикс
        byte operator++(int) { byte temp = *this; ++value; return temp; }
        byte operator--(int) { byte temp = *this; --value; return temp; }
        //ВВОД/ВЫВОД
        friend std::ostream& operator<<(std::ostream& os, const byte& b) {
            os << static_cast<int>(b.value); // выводим число
            return os;
        }
        
        friend std::istream& operator>>(std::istream& is, byte& b) {
            int temp;
            is >> temp;
            if(temp < -128 || temp > 127) is.setstate(std::ios::failbit);
            else b.value = static_cast<int8_t>(temp);
            return is;
        }
        byte(int v){ value = static_cast<int8_t>(v); }
        byte(int8_t v){ value = v; }
};
