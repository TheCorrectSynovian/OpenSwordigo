/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000319A50
 * Mangled: _ZNK5Caver5Proto25EntityControllerComponent3NewEv
 * Demangled: Caver::Proto::EntityControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 6
 *   insn=0x0000000000319A5C string=0x0000000000319A60 "h"
 *   insn=0x0000000000319A5C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000319A60 string=0x0000000000319A64 "eG"
 *   insn=0x0000000000319A68 string=0x0000000000319A6C " "
 *   insn=0x0000000000319A70 string=0x0000000000319A74 "A"
 *   insn=0x0000000000319A78 string=0x0000000000319A7C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::EntityControllerComponent::New(Caver::Proto::EntityControllerComponent *this)
{
  _QWORD *v1; // x0
  double result; // d0

  v1 = (_QWORD *)operator new(0x30u);
  *(_QWORD *)&result = 1;
  v1[3] = 0;
  v1[4] = 0;
  v1[1] = 0;
  v1[2] = 0;
  *v1 = off_6C83E8;
  v1[5] = 1;
  return result;
}

