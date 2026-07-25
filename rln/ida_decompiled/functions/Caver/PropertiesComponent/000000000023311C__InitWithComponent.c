/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023311C
 * Mangled: _ZN5Caver19PropertiesComponent17InitWithComponentEPKS0_
 * Demangled: Caver::PropertiesComponent::InitWithComponent(Caver::PropertiesComponent const*)
 *
 * Callers: 1
 *   0x00000000001F7FD0  Caver::PropertiesComponent::InitWithComponent(Caver::PropertiesComponent const*)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 26
 *   insn=0x0000000000233138 string=0x000000000023313C "`"
 *   insn=0x000000000023313C string=0x0000000000233140 "h""
 *   insn=0x0000000000233140 string=0x0000000000233144 "Y"
 *   insn=0x0000000000233144 string=0x0000000000233148 "`"
 *   insn=0x000000000023314C string=0x0000000000233150 "V"
 *   insn=0x0000000000233158 string=0x000000000023315C "\n"
 *   insn=0x0000000000233158 string=0x0000000000233168 "uF@"
 *   insn=0x000000000023315C string=0x0000000000233160 "J"
 *   insn=0x0000000000233160 string=0x0000000000233164 "\n"
 *   insn=0x0000000000233168 string=0x000000000023316C "i""
 *   insn=0x0000000000233174 string=0x0000000000233178 ""
 *   insn=0x000000000023317C string=0x0000000000233180 "!"
 *   insn=0x0000000000233188 string=0x000000000023318C "\t@"
 *   insn=0x0000000000233194 string=0x0000000000233198 ""
 *   insn=0x000000000023319C string=0x00000000002331A0 " "
 *   insn=0x00000000002331A8 string=0x00000000002331AC "\n"
 *   insn=0x00000000002331A8 string=0x00000000002331B8 "tN@"
 *   insn=0x00000000002331AC string=0x00000000002331B0 "J"
 *   insn=0x00000000002331B0 string=0x00000000002331B4 "\n"
 *   insn=0x00000000002331B8 string=0x00000000002331BC "i"\t"
 *   insn=0x00000000002331C4 string=0x00000000002331C8 ""
 *   insn=0x00000000002331CC string=0x00000000002331D0 "!"
 *   insn=0x00000000002331D8 string=0x00000000002331DC "\t@"
 *   insn=0x00000000002331E4 string=0x00000000002331E8 ""
 *   insn=0x0000000000233208 string=0x000000000023320C "@"
 *   insn=0x0000000000233234 string=0x0000000000233238 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PropertiesComponent::InitWithComponent(
        Caver::PropertiesComponent *this,
        const Caver::PropertiesComponent *a2)
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
  result = sub_56A6A8((char *)this + 120);
  v6 = *((_QWORD *)a2 + 16);
  v5 = *((_QWORD *)a2 + 17);
  if ( v5 )
    ++*(_QWORD *)(v5 + 8);
  v7 = (_QWORD *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 16) = v6;
  *((_QWORD *)this + 17) = v5;
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
        v11 = *((_QWORD *)a2 + 18);
        v10 = *((_QWORD *)a2 + 19);
        if ( !v10 )
          goto LABEL_8;
        goto LABEL_7;
      }
    }
  }
  v11 = *((_QWORD *)a2 + 18);
  v10 = *((_QWORD *)a2 + 19);
  if ( v10 )
LABEL_7:
    ++*(_QWORD *)(v10 + 8);
LABEL_8:
  v12 = (_QWORD *)*((_QWORD *)this + 19);
  *((_QWORD *)this + 18) = v11;
  *((_QWORD *)this + 19) = v10;
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

