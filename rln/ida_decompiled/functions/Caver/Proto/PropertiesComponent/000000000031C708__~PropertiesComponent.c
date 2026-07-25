/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031C708
 * Mangled: _ZN5Caver5Proto19PropertiesComponentD0Ev
 * Demangled: Caver::Proto::PropertiesComponent::~PropertiesComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000031C790  Caver::Proto::PropertiesComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x000000000031C710 string=0x000000000031C714 "H"
 *   insn=0x000000000031C714 string=0x000000000031C718 "QG"
 *   insn=0x000000000031C71C string=0x000000000031C720 "A"
 *   insn=0x000000000031C720 string=0x000000000031C724 "h"
 *   insn=0x000000000031C724 string=0x000000000031C728 "H"
 *   insn=0x000000000031C728 string=0x000000000031C72C ""
 *   insn=0x000000000031C72C string=0x000000000031C730 ""
 *   insn=0x000000000031C738 string=0x000000000031C73C "`\n@"
 *   insn=0x000000000031C740 string=0x000000000031C744 ""
 *   insn=0x000000000031C744 string=0x000000000031C748 ""
 *   insn=0x000000000031C754 string=0x00000000001F7600 "0'"
 *   insn=0x000000000031C764 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031C788 string=0x000000000031C78C "N"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PropertiesComponent::~PropertiesComponent(Caver::Proto::PropertiesComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C86B8;
  if ( (Caver::Proto::PropertiesComponent *)Caver::Proto::PropertiesComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

