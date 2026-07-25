/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000316EFC
 * Mangled: _ZN5Caver5Proto16ProgramComponentD0Ev
 * Demangled: Caver::Proto::ProgramComponent::~ProgramComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000316F84  Caver::Proto::ProgramComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x0000000000316F08 string=0x0000000000316F0C ""
 *   insn=0x0000000000316F10 string=0x0000000000316F14 "A"
 *   insn=0x0000000000316F14 string=0x0000000000316F18 "h"
 *   insn=0x0000000000316F18 string=0x0000000000316F1C "h"
 *   insn=0x0000000000316F1C string=0x0000000000316F20 "uC"
 *   insn=0x0000000000316F20 string=0x0000000000316F24 ""
 *   insn=0x0000000000316F2C string=0x0000000000316F30 "`"
 *   insn=0x0000000000316F34 string=0x0000000000316F38 ""
 *   insn=0x0000000000316F38 string=0x0000000000316F3C ""
 *   insn=0x0000000000316F48 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000316F58 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000316F7C string=0x0000000000316F80 "Q"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ProgramComponent::~ProgramComponent(Caver::Proto::ProgramComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C8208;
  if ( (Caver::Proto::ProgramComponent *)Caver::Proto::ProgramComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

