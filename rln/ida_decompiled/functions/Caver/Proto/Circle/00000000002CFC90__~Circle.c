/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CFC90
 * Mangled: _ZN5Caver5Proto6CircleD0Ev
 * Demangled: Caver::Proto::Circle::~Circle()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002CFD18  Caver::Proto::Circle::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x00000000002CFC9C string=0x00000000002CFCA0 ""
 *   insn=0x00000000002CFCA4 string=0x00000000002CFCA8 "A"
 *   insn=0x00000000002CFCA8 string=0x00000000002CFCAC "h"
 *   insn=0x00000000002CFCB0 string=0x00000000002CFCB4 "YC"
 *   insn=0x00000000002CFCB4 string=0x00000000002CFCB8 ""
 *   insn=0x00000000002CFCC0 string=0x00000000002CFCC4 "`\n@"
 *   insn=0x00000000002CFCC8 string=0x00000000002CFCCC ""
 *   insn=0x00000000002CFCCC string=0x00000000002CFCD0 ""
 *   insn=0x00000000002CFCD8 string=0x00000000002CFCDC "I"
 *   insn=0x00000000002CFCDC string=0x00000000001F7600 "0'"
 *   insn=0x00000000002CFCE8 string=0x00000000002CFCEC "q"
 *   insn=0x00000000002CFCEC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002CFCF4 string=0x00000000002CFCF8 "B"
 *   insn=0x00000000002CFD08 string=0x00000000002CFD0C "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Circle::~Circle(Caver::Proto::Circle *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C5BE8;
  if ( (Caver::Proto::Circle *)Caver::Proto::Circle::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

