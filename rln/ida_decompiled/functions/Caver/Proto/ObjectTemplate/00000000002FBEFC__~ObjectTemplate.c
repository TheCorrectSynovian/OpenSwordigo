/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FBEFC
 * Mangled: _ZN5Caver5Proto14ObjectTemplateD0Ev
 * Demangled: Caver::Proto::ObjectTemplate::~ObjectTemplate()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002FBF84  Caver::Proto::ObjectTemplate::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x00000000002FBF04 string=0x00000000002FBF08 "H"
 *   insn=0x00000000002FBF08 string=0x00000000002FBF0C "AG"
 *   insn=0x00000000002FBF10 string=0x00000000002FBF14 "A"
 *   insn=0x00000000002FBF14 string=0x00000000002FBF18 "h"
 *   insn=0x00000000002FBF18 string=0x00000000002FBF1C "H"
 *   insn=0x00000000002FBF1C string=0x00000000002FBF20 "ME"
 *   insn=0x00000000002FBF20 string=0x00000000002FBF24 ""
 *   insn=0x00000000002FBF2C string=0x00000000002FBF30 "`\n@"
 *   insn=0x00000000002FBF34 string=0x00000000002FBF38 ""
 *   insn=0x00000000002FBF38 string=0x00000000002FBF3C ""
 *   insn=0x00000000002FBF48 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002FBF58 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002FBF7C string=0x00000000002FBF80 "Q"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ObjectTemplate::~ObjectTemplate(Caver::Proto::ObjectTemplate *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C7308;
  if ( (Caver::Proto::ObjectTemplate *)Caver::Proto::ObjectTemplate::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

