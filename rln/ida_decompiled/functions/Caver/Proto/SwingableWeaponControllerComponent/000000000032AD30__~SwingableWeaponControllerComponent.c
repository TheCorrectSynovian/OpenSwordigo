/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032AD30
 * Mangled: _ZN5Caver5Proto34SwingableWeaponControllerComponentD0Ev
 * Demangled: Caver::Proto::SwingableWeaponControllerComponent::~SwingableWeaponControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F6D20  Caver::Proto::SwingableWeaponControllerComponent::SharedDtor(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x000000000032AD3C string=0x000000000032AD40 ""
 *   insn=0x000000000032AD44 string=0x000000000032AD48 "A"
 *   insn=0x000000000032AD48 string=0x000000000032AD4C "h"
 *   insn=0x000000000032AD50 string=0x00000000001F6D20 "0'"
 *   insn=0x000000000032AD54 string=0x000000000032AD58 "*2"
 *   insn=0x000000000032AD58 string=0x00000000001F7600 "0'"
 *   insn=0x000000000032AD64 string=0x000000000032AD68 "R1"
 *   insn=0x000000000032AD68 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032AD78 string=0x000000000032AD7C "!2"
 *   insn=0x000000000032AD80 string=0x000000000032AD84 "K1"
 *   insn=0x000000000032AD8C string=0x000000000032AD90 "o"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SwingableWeaponControllerComponent::~SwingableWeaponControllerComponent(
        Caver::Proto::SwingableWeaponControllerComponent *this)
{
  *(_QWORD *)this = off_6C9180;
  Caver::Proto::SwingableWeaponControllerComponent::SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

