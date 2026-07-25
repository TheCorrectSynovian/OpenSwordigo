/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000231558
 * Mangled: _ZN5Caver16ProgramComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ProgramComponent::InitWithComponent(Caver::ProgramComponent const*)
 *
 * Callers: 1
 *   0x00000000001F7DC0  Caver::ProgramComponent::InitWithComponent(Caver::ProgramComponent const*)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 29
 *   insn=0x0000000000231574 string=0x0000000000231578 "`"
 *   insn=0x0000000000231578 string=0x000000000023157C "h""
 *   insn=0x000000000023157C string=0x0000000000231580 "J"
 *   insn=0x0000000000231584 string=0x0000000000231588 "`"
 *   insn=0x000000000023158C string=0x0000000000231590 "h"
 *   insn=0x0000000000231594 string=0x0000000000231598 "hv"
 *   insn=0x000000000023159C string=0x00000000002315A0 "h"
 *   insn=0x00000000002315A0 string=0x00000000002315A4 "A"
 *   insn=0x00000000002315AC string=0x00000000002315B0 "\n"
 *   insn=0x00000000002315AC string=0x00000000002315BC "uJ@"
 *   insn=0x00000000002315B0 string=0x00000000002315B4 "J"
 *   insn=0x00000000002315B4 string=0x00000000002315B8 "\n"
 *   insn=0x00000000002315BC string=0x00000000002315C0 "i"
 *   insn=0x00000000002315C8 string=0x00000000002315CC ""
 *   insn=0x00000000002315D0 string=0x00000000002315D4 "!"
 *   insn=0x00000000002315DC string=0x00000000002315E0 "\t@"
 *   insn=0x00000000002315E8 string=0x00000000002315EC ""
 *   insn=0x00000000002315F0 string=0x00000000002315F4 " "
 *   insn=0x00000000002315FC string=0x0000000000231600 "\n"
 *   insn=0x00000000002315FC string=0x000000000023160C "tR@"
 *   insn=0x0000000000231600 string=0x0000000000231604 "J"
 *   insn=0x0000000000231604 string=0x0000000000231608 "\n"
 *   insn=0x000000000023160C string=0x0000000000231610 "i"
 *   insn=0x0000000000231618 string=0x000000000023161C ""
 *   insn=0x0000000000231620 string=0x0000000000231624 "!"
 *   insn=0x000000000023162C string=0x0000000000231630 "\t@"
 *   insn=0x0000000000231638 string=0x000000000023163C ""
 *   insn=0x000000000023165C string=0x0000000000231660 "@"
 *   insn=0x0000000000231688 string=0x000000000023168C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramComponent::InitWithComponent(
        Caver::ProgramComponent *this,
        const Caver::ProgramComponent *a2)
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
  *((_BYTE *)this + 112) = *((_BYTE *)a2 + 112);
  *((_DWORD *)this + 29) = *((_DWORD *)a2 + 29);
  *((_BYTE *)this + 120) = *((_BYTE *)a2 + 120);
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

