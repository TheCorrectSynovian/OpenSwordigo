/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000280954
 * Mangled: _ZN5Caver24PhysicsPlatformComponentC2Ev
 * Demangled: Caver::PhysicsPlatformComponent::PhysicsPlatformComponent(void)
 *
 * Callers: 1
 *   0x00000000001FA850  Caver::PhysicsPlatformComponent::PhysicsPlatformComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 16
 *   insn=0x000000000028095C string=0x0000000000280960 "(#"
 *   insn=0x0000000000280960 string=0x0000000000280964 ")#"
 *   insn=0x0000000000280964 string=0x0000000000280968 ""
 *   insn=0x0000000000280968 string=0x000000000028096C ")"
 *   insn=0x000000000028096C string=0x0000000000280970 "a"
 *   insn=0x0000000000280970 string=0x0000000000280974 "*"
 *   insn=0x0000000000280974 string=0x0000000000280978 "@"
 *   insn=0x0000000000280978 string=0x000000000028097C "*"
 *   insn=0x000000000028097C string=0x0000000000280980 ""
 *   insn=0x0000000000280984 string=0x0000000000280988 "@"
 *   insn=0x0000000000280988 string=0x000000000028098C "J"
 *   insn=0x0000000000280994 string=0x0000000000280998 "@E"
 *   insn=0x0000000000280998 string=0x000000000028099C ")A"
 *   insn=0x000000000028099C string=0x00000000002809A0 "\t"
 *   insn=0x00000000002809A8 string=0x00000000002809AC "|"
 *   insn=0x00000000002809AC string=0x00000000002809B0 "\tp"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::PhysicsPlatformComponent::PhysicsPlatformComponent(Caver::PhysicsPlatformComponent *this)
{
  __int128 v1; // q0
  long double result; // q0

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *(_QWORD *)&v1 = &off_6BFCC8;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_QWORD *)&v1 + 1) = &off_6BFD08;
  *((_QWORD *)this + 9) = 0;
  *((_OWORD *)this + 1) = v1;
  result = *(long double *)&xmmword_588910;
  *(_QWORD *)this = off_6BFBB0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_DWORD *)this + 28) = 1;
  *(_QWORD *)((char *)this + 124) = 0;
  *(_QWORD *)((char *)this + 116) = 0;
  *((_DWORD *)this + 33) = 0;
  *(_OWORD *)((char *)this + 148) = xmmword_588910;
  return result;
}

