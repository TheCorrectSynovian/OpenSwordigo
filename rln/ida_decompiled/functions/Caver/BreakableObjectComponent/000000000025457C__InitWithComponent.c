/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025457C
 * Mangled: _ZN5Caver24BreakableObjectComponent17InitWithComponentEPKS0_
 * Demangled: Caver::BreakableObjectComponent::InitWithComponent(Caver::BreakableObjectComponent const*)
 *
 * Callers: 1
 *   0x00000000001FAA00  Caver::BreakableObjectComponent::InitWithComponent(Caver::BreakableObjectComponent const*)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 28
 *   insn=0x0000000000254598 string=0x000000000025459C "`"
 *   insn=0x000000000025459C string=0x00000000002545A0 "h""
 *   insn=0x00000000002545A0 string=0x00000000002545A4 "AX"
 *   insn=0x00000000002545A8 string=0x00000000002545AC "`"
 *   insn=0x00000000002545B0 string=0x00000000002545B4 "h"
 *   insn=0x00000000002545B8 string=0x00000000002545BC "hB"
 *   insn=0x00000000002545BC string=0x00000000002545C0 ":X"
 *   insn=0x00000000002545C8 string=0x00000000002545CC "\n"
 *   insn=0x00000000002545C8 string=0x00000000002545D8 "uJ@"
 *   insn=0x00000000002545CC string=0x00000000002545D0 "J"
 *   insn=0x00000000002545D0 string=0x00000000002545D4 "\n"
 *   insn=0x00000000002545D8 string=0x00000000002545DC "i"
 *   insn=0x00000000002545E4 string=0x00000000002545E8 ""
 *   insn=0x00000000002545EC string=0x00000000002545F0 "!"
 *   insn=0x00000000002545F8 string=0x00000000002545FC "\t@"
 *   insn=0x0000000000254604 string=0x0000000000254608 ""
 *   insn=0x000000000025460C string=0x0000000000254610 " "
 *   insn=0x0000000000254618 string=0x000000000025461C "\n"
 *   insn=0x0000000000254618 string=0x0000000000254628 "tR@"
 *   insn=0x000000000025461C string=0x0000000000254620 "J"
 *   insn=0x0000000000254620 string=0x0000000000254624 "\n"
 *   insn=0x0000000000254628 string=0x000000000025462C "i"
 *   insn=0x0000000000254634 string=0x0000000000254638 ""
 *   insn=0x000000000025463C string=0x0000000000254640 "!"
 *   insn=0x0000000000254648 string=0x000000000025464C "\t@"
 *   insn=0x0000000000254654 string=0x0000000000254658 ""
 *   insn=0x0000000000254678 string=0x000000000025467C "@"
 *   insn=0x00000000002546A4 string=0x00000000002546A8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BreakableObjectComponent::InitWithComponent(
        Caver::BreakableObjectComponent *this,
        const Caver::BreakableObjectComponent *a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x9
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  *((_BYTE *)this + 113) = *((_BYTE *)a2 + 113);
  *(_QWORD *)((char *)this + 116) = *(_QWORD *)((char *)a2 + 116);
  result = sub_56A6A8((char *)this + 128);
  v6 = *((_QWORD *)a2 + 17);
  v5 = *((_QWORD *)a2 + 18);
  if ( v5 )
    ++*(_QWORD *)(v5 + 8);
  v7 = (_QWORD *)*((_QWORD *)this + 18);
  *((_QWORD *)this + 17) = v6;
  *((_QWORD *)this + 18) = v5;
  if ( v7 )
  {
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
        v11 = *((_QWORD *)a2 + 19);
        v10 = *((_QWORD *)a2 + 20);
        if ( !v10 )
          goto LABEL_8;
        goto LABEL_7;
      }
    }
  }
  v11 = *((_QWORD *)a2 + 19);
  v10 = *((_QWORD *)a2 + 20);
  if ( v10 )
LABEL_7:
    ++*(_QWORD *)(v10 + 8);
LABEL_8:
  v12 = (_QWORD *)*((_QWORD *)this + 20);
  *((_QWORD *)this + 19) = v11;
  *((_QWORD *)this + 20) = v10;
  if ( v12 )
  {
    v13 = v12[1] - 1LL;
    v12[1] = v13;
    if ( !v13 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v14 = v12[2] - 1LL;
      v12[2] = v14;
      if ( !v14 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  return result;
}

