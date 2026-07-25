/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B63F0
 * Mangled: _ZN5Caver24PressureTriggerComponentD2Ev
 * Demangled: Caver::PressureTriggerComponent::~PressureTriggerComponent()
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FD720  Caver::PressureTriggerComponent::InitWithComponent(Caver::PressureTriggerComponent const*)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 43
 *   insn=0x00000000002B63FC string=0x00000000002B6400 "!B"
 *   insn=0x00000000002B6404 string=0x00000000002B6408 "`"
 *   insn=0x00000000002B6408 string=0x00000000002B640C "\n"
 *   insn=0x00000000002B640C string=0x00000000002B6410 "\tA"
 *   insn=0x00000000002B6410 string=0x00000000002B6414 ""
 *   insn=0x00000000002B6414 string=0x00000000002B6418 "@"
 *   insn=0x00000000002B641C string=0x00000000002B6420 "i"
 *   insn=0x00000000002B6420 string=0x00000000002B6424 "`"
 *   insn=0x00000000002B6428 string=0x00000000002B642C "`""
 *   insn=0x00000000002B643C string=0x00000000002B6440 "$"
 *   insn=0x00000000002B6440 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002B644C string=0x00000000002B6450 "`""
 *   insn=0x00000000002B6478 string=0x00000000002B647C "!B"
 *   insn=0x00000000002B6480 string=0x00000000002B6484 "`"
 *   insn=0x00000000002B6484 string=0x00000000002B6488 "\n"
 *   insn=0x00000000002B6488 string=0x00000000002B648C "\tA"
 *   insn=0x00000000002B648C string=0x00000000002B6490 ""
 *   insn=0x00000000002B6490 string=0x00000000002B6494 "@"
 *   insn=0x00000000002B6498 string=0x00000000002B649C "i"
 *   insn=0x00000000002B649C string=0x00000000002B64A0 "`"
 *   insn=0x00000000002B64A4 string=0x00000000002B64A8 "`""
 *   insn=0x00000000002B64B0 string=0x00000000002B64B4 ""
 *   insn=0x00000000002B64C0 string=0x00000000002B64C4 "{"
 *   insn=0x00000000002B64C4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002B64C8 string=0x00000000002B64CC ""
 *   insn=0x00000000002B64D8 string=0x00000000002B64DC "`""
 *   insn=0x00000000002B64EC string=0x00000000002B64F0 "p"
 *   insn=0x00000000002B6510 string=0x00000000002B6514 "3"
 *   insn=0x00000000002B6514 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002B6520 string=0x00000000002B6524 "h!"
 *   insn=0x00000000002B6528 string=0x00000000002B652C ""
 *   insn=0x00000000002B652C string=0x00000000002B6530 "J!B"
 *   insn=0x00000000002B653C string=0x00000000002B6540 "a"
 *   insn=0x00000000002B6540 string=0x00000000002B6544 "a"
 *   insn=0x00000000002B6544 string=0x00000000002B6548 "KA"
 *   insn=0x00000000002B6550 string=0x00000000002B6554 " "
 *   insn=0x00000000002B6558 string=0x00000000002B655C "K"
 *   insn=0x00000000002B656C string=0x00000000002B6570 "`"
 *   insn=0x00000000002B6570 string=0x00000000002B6574 "J"
 *   insn=0x00000000002B6574 string=0x00000000002B6578 ""
 *   insn=0x00000000002B6584 string=0x00000000002B6588 "@"
 *   insn=0x00000000002B65A4 string=0x00000000002B65A8 "^"
 *   insn=0x00000000002B65A8 string=0x00000000001FD720 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PressureTriggerComponent::~PressureTriggerComponent(Caver::PressureTriggerComponent *this)
{
  __int128 v2; // q0

  *(_QWORD *)&v2 = &off_6C4728;
  *((_QWORD *)&v2 + 1) = &off_6C4768;
  *(_QWORD *)this = off_6C4610;
  *((_OWORD *)this + 1) = v2;
  Caver::Program::~Program((Caver::PressureTriggerComponent *)((char *)this + 176));
  Caver::Program::~Program((Caver::PressureTriggerComponent *)((char *)this + 136));
  Caver::Component::~Component(this);
}

