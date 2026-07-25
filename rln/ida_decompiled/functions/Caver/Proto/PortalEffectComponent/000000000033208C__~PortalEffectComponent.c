/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033208C
 * Mangled: _ZN5Caver5Proto21PortalEffectComponentD0Ev
 * Demangled: Caver::Proto::PortalEffectComponent::~PortalEffectComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000332128  Caver::Proto::PortalEffectComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x0000000000332098 string=0x000000000033209C "]B"
 *   insn=0x00000000003320A0 string=0x00000000003320A4 "A"
 *   insn=0x00000000003320A4 string=0x00000000003320A8 "h"
 *   insn=0x00000000003320AC string=0x00000000003320B0 ""
 *   insn=0x00000000003320B0 string=0x00000000003320B4 ""
 *   insn=0x00000000003320B8 string=0x00000000003320BC "`"
 *   insn=0x00000000003320BC string=0x00000000003320C0 "`"
 *   insn=0x00000000003320C4 string=0x00000000003320C8 ""
 *   insn=0x00000000003320C4 string=0x00000000003320D4 "`"
 *   insn=0x00000000003320C8 string=0x00000000003320CC ""
 *   insn=0x00000000003320D8 string=0x00000000003320DC ""
 *   insn=0x00000000003320DC string=0x00000000003320E0 ""
 *   insn=0x00000000003320E8 string=0x00000000003320EC "E"
 *   insn=0x00000000003320EC string=0x00000000001F7600 "0'"
 *   insn=0x00000000003320F8 string=0x00000000003320FC "m"
 *   insn=0x00000000003320FC string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000332104 string=0x0000000000332108 ">"
 *   insn=0x0000000000332118 string=0x000000000033211C "e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PortalEffectComponent::~PortalEffectComponent(Caver::Proto::PortalEffectComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x0

  *(_QWORD *)this = off_6C96A8;
  if ( (Caver::Proto::PortalEffectComponent *)Caver::Proto::PortalEffectComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *((_QWORD *)this + 4);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

