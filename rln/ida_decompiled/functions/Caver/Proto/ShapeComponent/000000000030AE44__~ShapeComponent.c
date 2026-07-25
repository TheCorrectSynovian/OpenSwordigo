/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030AE44
 * Mangled: _ZN5Caver5Proto14ShapeComponentD0Ev
 * Demangled: Caver::Proto::ShapeComponent::~ShapeComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x000000000030AE50 string=0x000000000030AE54 ""
 *   insn=0x000000000030AE58 string=0x000000000030AE5C "A"
 *   insn=0x000000000030AE5C string=0x000000000030AE60 "h"
 *   insn=0x000000000030AE64 string=0x000000000030AE68 ""
 *   insn=0x000000000030AE68 string=0x000000000030AE6C ""
 *   insn=0x000000000030AE74 string=0x000000000030AE78 "`\n@"
 *   insn=0x000000000030AE7C string=0x000000000030AE80 ""
 *   insn=0x000000000030AE7C string=0x000000000030AE8C "`"
 *   insn=0x000000000030AE80 string=0x000000000030AE84 ""
 *   insn=0x000000000030AE90 string=0x000000000030AE94 ""
 *   insn=0x000000000030AE90 string=0x000000000030AEA0 "`"
 *   insn=0x000000000030AE94 string=0x000000000030AE98 ""
 *   insn=0x000000000030AEA4 string=0x000000000030AEA8 ""
 *   insn=0x000000000030AEA8 string=0x000000000030AEAC ""
 *   insn=0x000000000030AEB8 string=0x00000000001F7600 "0'"
 *   insn=0x000000000030AEC8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030AEE8 string=0x000000000030AEEC "v"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ShapeComponent::~ShapeComponent(Caver::Proto::ShapeComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x0
  __int64 v4; // x0

  *(_QWORD *)this = off_6C7A10;
  if ( (Caver::Proto::ShapeComponent *)Caver::Proto::ShapeComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *((_QWORD *)this + 3);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v4 = *((_QWORD *)this + 4);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

