#pragma once
#include <cstdio>
#include <cstring>

class Car {
protected:
    int speed;
    char name[40];
public:
    int gear;
    Car() { }
    ~Car() { }
    // �̸� (private)
    // ��� (public)
    // �⺻ ������
    // �Ҹ���
    Car(int s, const char* n, int g) // �Ű������� �ִ� ������
        : speed(s), gear(g) { // ��� �ʱ�ȭ ����Ʈ (������� �ʱ�ȭ)
        strcpy_s(name, n); // ������ �Լ� ��ü (name ��� �ʱ�ȭ)
    }

    void changeGear(int g = 4) {  // ��� �ܼ��� �����ϴ� ��� �Լ�
        gear = g;
    }
    void speedUp() {
        // �ӵ��� 5�� ���� ��� �Լ�
        speed += 5;
    }
    void display() {
        printf("[%s] : ���=%d�� �ӵ�=%dkmph\n", name, gear, speed);
    }
    void whereAmI() { printf("��ü �ּ� = %x\n", this); }
};