/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030FC8C
 * Mangled: _ZN5Caver5Proto14LightComponentD0Ev
 * Demangled: Caver::Proto::LightComponent::~LightComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000030FD28  Caver::Proto::LightComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x000000000030FC98 string=0x000000000030FC9C "yB"
 *   insn=0x000000000030FCA0 string=0x000000000030FCA4 "A"
 *   insn=0x000000000030FCA4 string=0x000000000030FCA8 "h"
 *   insn=0x000000000030FCAC string=0x000000000030FCB0 "eF"
 *   insn=0x000000000030FCB0 string=0x000000000030FCB4 ""
 *   insn=0x000000000030FCB8 string=0x000000000030FCBC "`"
 *   insn=0x000000000030FCBC string=0x000000000030FCC0 "`"
 *   insn=0x000000000030FCC4 string=0x000000000030FCC8 ""
 *   insn=0x000000000030FCC4 string=0x000000000030FCD4 "`"
 *   insn=0x000000000030FCC8 string=0x000000000030FCCC ""
 *   insn=0x000000000030FCD8 string=0x000000000030FCDC ""
 *   insn=0x000000000030FCDC string=0x000000000030FCE0 ""
 *   insn=0x000000000030FCE8 string=0x000000000030FCEC "E"
 *   insn=0x000000000030FCEC string=0x00000000001F7600 "0'"
 *   insn=0x000000000030FCF8 string=0x000000000030FCFC "m"
 *   insn=0x000000000030FCFC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030FD04 string=0x000000000030FD08 ">"
 *   insn=0x000000000030FD18 string=0x000000000030FD1C "e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::LightComponent::~LightComponent(Caver::Proto::LightComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x0

  *(_QWORD *)this = off_6C7CE0;
  if ( (Caver::Proto::LightComponent *)Caver::Proto::LightComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *((_QWORD *)this + 6);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

