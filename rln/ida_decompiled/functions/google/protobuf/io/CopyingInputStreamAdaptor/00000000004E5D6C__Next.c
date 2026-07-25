/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E5D6C
 * Mangled: _ZN6google8protobuf2io25CopyingInputStreamAdaptor4NextEPPKvPi
 * Demangled: google::protobuf::io::CopyingInputStreamAdaptor::Next(void const**,int *)
 *
 * Callers: 1
 *   0x00000000004E5CB4  google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor()
 *
 * Callees: 2
 *   0x00000000001F8570  operator new[](ulong)
 *   0x0000000000200120  google::protobuf::io::CopyingInputStreamAdaptor::FreeBuffer(void)
 *
 * Referenced strings: 26
 *   insn=0x00000000004E5D7C string=0x00000000004E5D80 "hF@9"
 *   insn=0x00000000004E5D88 string=0x00000000004E5D8C "h"
 *   insn=0x00000000004E5D8C string=0x00000000004E5D98 "h"
 *   insn=0x00000000004E5D90 string=0x00000000004E5D94 "$"
 *   insn=0x00000000004E5D9C string=0x00000000004E5DA0 "h*"
 *   insn=0x00000000004E5D9C string=0x00000000004E5DB8 "i2@"
 *   insn=0x00000000004E5DAC string=0x00000000001F8570 "0'"
 *   insn=0x00000000004E5DB0 string=0x00000000004E5DB4 "h"
 *   insn=0x00000000004E5DB8 string=0x00000000004E5DBC "?"
 *   insn=0x00000000004E5DBC string=0x00000000004E5DC0 "+"
 *   insn=0x00000000004E5DC0 string=0x00000000004E5DC4 "j."
 *   insn=0x00000000004E5DC0 string=0x00000000004E5DE4 "`"
 *   insn=0x00000000004E5DC4 string=0x00000000004E5DC8 "+}@"
 *   insn=0x00000000004E5DC8 string=0x00000000004E5DCC ""
 *   insn=0x00000000004E5DCC string=0x00000000004E5DD0 ""
 *   insn=0x00000000004E5DE4 string=0x00000000004E5DE8 "b*@"
 *   insn=0x00000000004E5DEC string=0x00000000004E5DF0 "\t"
 *   insn=0x00000000004E5DF0 string=0x00000000004E5DF4 ")\t@"
 *   insn=0x00000000004E5DF4 string=0x00000000004E5DF8 " "
 *   insn=0x00000000004E5DFC string=0x00000000004E5E00 "`."
 *   insn=0x00000000004E5E04 string=0x00000000004E5E08 "h"
 *   insn=0x00000000004E5E04 string=0x00000000004E5E34 "`"
 *   insn=0x00000000004E5E08 string=0x00000000004E5E0C ""
 *   insn=0x00000000004E5E0C string=0x00000000004E5E10 "h"
 *   insn=0x00000000004E5E14 string=0x00000000004E5E18 "h"
 *   insn=0x00000000004E5E38 string=0x00000000004E5E3C "hF"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CopyingInputStreamAdaptor::Next(
        google::protobuf::io::CopyingInputStreamAdaptor *this,
        const void **a2,
        int *a3)
{
  __int64 v7; // x8
  unsigned __int64 v8; // x0
  int v9; // w9
  int v10; // w0

  if ( *((_BYTE *)this + 17) )
    return 0;
  v7 = *((_QWORD *)this + 4);
  if ( !v7 )
  {
    if ( *((int *)this + 10) < 0LL )
      v8 = -1;
    else
      v8 = *((int *)this + 10);
    v7 = operator new[](v8);
    *((_QWORD *)this + 4) = v7;
  }
  v9 = *((_DWORD *)this + 12);
  if ( v9 >= 1 )
  {
    *a2 = (const void *)(v7 + *((int *)this + 11) - v9);
    *a3 = v9;
    *((_DWORD *)this + 12) = 0;
    return 1;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 16LL))(
          *((_QWORD *)this + 1),
          v7,
          *((unsigned int *)this + 10));
  *((_DWORD *)this + 11) = v10;
  if ( v10 > 0 )
  {
    *((_QWORD *)this + 3) += v10;
    *a3 = v10;
    *a2 = (const void *)*((_QWORD *)this + 4);
    return 1;
  }
  if ( v10 < 0 )
    *((_BYTE *)this + 17) = 1;
  google::protobuf::io::CopyingInputStreamAdaptor::FreeBuffer(this);
  return 0;
}

