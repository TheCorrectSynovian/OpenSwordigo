/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000329AA8
 * Mangled: _ZN5Caver5Proto24SwingableWeaponComponentD0Ev
 * Demangled: Caver::Proto::SwingableWeaponComponent::~SwingableWeaponComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000329B30  Caver::Proto::SwingableWeaponComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x0000000000329AB4 string=0x0000000000329AB8 "%E"
 *   insn=0x0000000000329ABC string=0x0000000000329AC0 "A"
 *   insn=0x0000000000329AC0 string=0x0000000000329AC4 "h"
 *   insn=0x0000000000329AC8 string=0x0000000000329ACC ""
 *   insn=0x0000000000329ACC string=0x0000000000329AD0 ""
 *   insn=0x0000000000329AD8 string=0x0000000000329ADC "`"
 *   insn=0x0000000000329AE0 string=0x0000000000329AE4 ""
 *   insn=0x0000000000329AE4 string=0x0000000000329AE8 ""
 *   insn=0x0000000000329AF4 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000329B04 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000329B28 string=0x0000000000329B2C "f_\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SwingableWeaponComponent::~SwingableWeaponComponent(
        Caver::Proto::SwingableWeaponComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C9108;
  if ( (Caver::Proto::SwingableWeaponComponent *)Caver::Proto::SwingableWeaponComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 4);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

