/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E6458
 * Mangled: _ZN6google8protobuf2io26CopyingOutputStreamAdaptor4NextEPPvPi
 * Demangled: google::protobuf::io::CopyingOutputStreamAdaptor::Next(void **,int *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 24
 *   insn=0x00000000004E646C string=0x00000000004E6470 "hZE)"
 *   insn=0x00000000004E647C string=0x00000000004E6480 "a"
 *   insn=0x00000000004E6480 string=0x00000000004E6484 "hF@9h"
 *   insn=0x00000000004E6480 string=0x00000000004E64CC "`"
 *   insn=0x00000000004E6484 string=0x00000000004E6488 "h"
 *   insn=0x00000000004E6494 string=0x00000000004E6498 "`"
 *   insn=0x00000000004E6498 string=0x00000000004E649C "a"
 *   insn=0x00000000004E64A0 string=0x00000000004E64A4 ""
 *   insn=0x00000000004E64A4 string=0x00000000004E64A8 "\t@"
 *   insn=0x00000000004E64AC string=0x00000000004E64B0 "@"
 *   insn=0x00000000004E64B0 string=0x00000000004E64B4 "h."
 *   insn=0x00000000004E64B0 string=0x00000000004E6518 "`"
 *   insn=0x00000000004E64B4 string=0x00000000004E64B8 "i"
 *   insn=0x00000000004E64C0 string=0x00000000004E64C4 "("
 *   insn=0x00000000004E64C4 string=0x00000000004E64C8 "h"
 *   insn=0x00000000004E64CC string=0x00000000004E64D0 "w*"
 *   insn=0x00000000004E64D4 string=0x00000000004E64E8 ""
 *   insn=0x00000000004E64DC string=0x00000000004E64E0 "$H"
 *   insn=0x00000000004E64E0 string=0x00000000004E64E4 "`"
 *   insn=0x00000000004E64E0 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004E64F4 string=0x00000000004E64F8 "h*@"
 *   insn=0x00000000004E64FC string=0x00000000004E6500 "h."
 *   insn=0x00000000004E651C string=0x00000000004E6520 "hF"
 *   insn=0x00000000004E652C string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall google::protobuf::io::CopyingOutputStreamAdaptor::Next(
        google::protobuf::io::CopyingOutputStreamAdaptor *this,
        void **a2,
        int *a3)
{
  unsigned int v4; // w22
  void *result; // x0
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x0
  __int64 v11; // x23
  unsigned __int64 v12; // x0

  v4 = *((_DWORD *)this + 11);
  if ( v4 != *((_DWORD *)this + 10) )
    goto LABEL_7;
  if ( *((_BYTE *)this + 17) )
    return 0;
  if ( !v4 )
    goto LABEL_7;
  if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 1) + 16LL))(
          *((_QWORD *)this + 1),
          *((_QWORD *)this + 4),
          v4)
      & 1) != 0 )
  {
    v8 = *((int *)this + 11);
    v9 = *((_QWORD *)this + 3);
    v4 = 0;
    *((_DWORD *)this + 11) = 0;
    *((_QWORD *)this + 3) = v9 + v8;
LABEL_7:
    v10 = *((_QWORD *)this + 4);
    v11 = *((int *)this + 10);
    if ( !v10 )
    {
      if ( v11 < 0 )
        v12 = -1;
      else
        v12 = *((int *)this + 10);
      v10 = operator new[](v12);
      *((_QWORD *)this + 4) = v10;
    }
    *a2 = (void *)(v10 + (int)v4);
    *a3 = v11 - v4;
    result = &dword_0 + 1;
    *((_DWORD *)this + 11) = *((_DWORD *)this + 10);
    return result;
  }
  result = (void *)*((_QWORD *)this + 4);
  *((_BYTE *)this + 17) = 1;
  *((_DWORD *)this + 11) = 0;
  if ( result )
  {
    operator delete[](result);
    result = 0;
    *((_QWORD *)this + 4) = 0;
  }
  return result;
}

