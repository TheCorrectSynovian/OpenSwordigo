/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E63C8
 * Mangled: _ZN6google8protobuf2io26CopyingOutputStreamAdaptor5FlushEv
 * Demangled: google::protobuf::io::CopyingOutputStreamAdaptor::Flush(void)
 *
 * Callers: 1
 *   0x00000000004E6390  google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor()
 *
 * Callees: 1
 *   0x00000000001F4F60  operator delete[](void *)
 *
 * Referenced strings: 14
 *   insn=0x00000000004E63D4 string=0x00000000004E63D8 "hF@9"
 *   insn=0x00000000004E63DC string=0x00000000004E63F0 "b.@"
 *   insn=0x00000000004E63F4 string=0x00000000004E63F8 "`"
 *   insn=0x00000000004E63F8 string=0x00000000004E63FC "a"
 *   insn=0x00000000004E63FC string=0x00000000004E6400 ""
 *   insn=0x00000000004E6400 string=0x00000000004E6404 "\t@"
 *   insn=0x00000000004E6408 string=0x00000000004E640C "@"
 *   insn=0x00000000004E640C string=0x00000000004E6410 "h."
 *   insn=0x00000000004E640C string=0x00000000004E6434 "`"
 *   insn=0x00000000004E6410 string=0x00000000004E6414 "i"
 *   insn=0x00000000004E641C string=0x00000000004E6420 "("
 *   insn=0x00000000004E6420 string=0x00000000004E6424 "h"
 *   insn=0x00000000004E6438 string=0x00000000004E643C "hF"
 *   insn=0x00000000004E6448 string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall google::protobuf::io::CopyingOutputStreamAdaptor::Flush(
        google::protobuf::io::CopyingOutputStreamAdaptor *this)
{
  void *result; // x0
  __int64 v3; // x8
  __int64 v4; // x9

  if ( *((_BYTE *)this + 17) )
    return 0;
  if ( !*((_DWORD *)this + 11) )
    return &dword_0 + 1;
  if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 1) + 16LL))(
          *((_QWORD *)this + 1),
          *((_QWORD *)this + 4))
      & 1) != 0 )
  {
    v3 = *((int *)this + 11);
    v4 = *((_QWORD *)this + 3);
    *((_DWORD *)this + 11) = 0;
    result = &dword_0 + 1;
    *((_QWORD *)this + 3) = v4 + v3;
  }
  else
  {
    result = (void *)*((_QWORD *)this + 4);
    *((_BYTE *)this + 17) = 1;
    *((_DWORD *)this + 11) = 0;
    if ( result )
    {
      operator delete[](result);
      result = 0;
      *((_QWORD *)this + 4) = 0;
    }
  }
  return result;
}

