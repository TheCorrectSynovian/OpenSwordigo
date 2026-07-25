/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000454D40
 * Mangled: _ZNSt6vectorIN5Caver12ParticleTypeESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_
 * Demangled: std::vector<Caver::ParticleType,std::allocator<Caver::ParticleType>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ParticleType*,std::vector<Caver::ParticleType,std::allocator<Caver::ParticleType>>>,Caver::ParticleType const&)
 *
 * Callers: 1
 *   0x00000000001FB260  std::vector<Caver::ParticleType,std::allocator<Caver::ParticleType>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ParticleType*,std::vector<Caver::ParticleType,std::allocator<Caver::ParticleType>>>,Caver::ParticleType const&)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCF00  std::copy_backward<Caver::ParticleType *,Caver::ParticleType *>(Caver::ParticleType *,Caver::ParticleType *,Caver::ParticleType *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 172
 *   insn=0x0000000000454D6C string=0x0000000000454D70 "_"
 *   insn=0x0000000000454D74 string=0x0000000000454D78 "H"
 *   insn=0x0000000000454D78 string=0x0000000000454D7C "H"
 *   insn=0x0000000000454D80 string=0x0000000000454D84 "\t\t@"
 *   insn=0x0000000000454D80 string=0x0000000000454D90 "@"
 *   insn=0x0000000000454D84 string=0x0000000000454D88 ")"
 *   insn=0x0000000000454D88 string=0x0000000000454D8C "\t\t"
 *   insn=0x0000000000454D90 string=0x0000000000454D94 "B"
 *   insn=0x0000000000454D94 string=0x0000000000454D98 "D"
 *   insn=0x0000000000454D98 string=0x0000000000454D9C "H`"
 *   insn=0x0000000000454D9C string=0x0000000000454DA0 "@"
 *   insn=0x0000000000454DA0 string=0x0000000000454DA4 "A"
 *   insn=0x0000000000454DA4 string=0x0000000000454DA8 "B"
 *   insn=0x0000000000454DA8 string=0x0000000000454DAC "C"
 *   insn=0x0000000000454DAC string=0x0000000000454DB0 "D"
 *   insn=0x0000000000454DC0 string=0x0000000000454DC4 ""
 *   insn=0x0000000000454DE0 string=0x0000000000454DE4 "A`"
 *   insn=0x0000000000454DEC string=0x0000000000454DF0 "D"
 *   insn=0x0000000000454DF0 string=0x00000000001FCF00 "0'"
 *   insn=0x0000000000454DF4 string=0x0000000000454E04 "`"
 *   insn=0x0000000000454DF8 string=0x0000000000454DFC ""
 *   insn=0x0000000000454E04 string=0x0000000000454E08 "t"
 *   insn=0x0000000000454E0C string=0x0000000000454E10 "@"
 *   insn=0x0000000000454E0C string=0x0000000000454E2C "u"
 *   insn=0x0000000000454E10 string=0x0000000000454E14 ""
 *   insn=0x0000000000454E14 string=0x0000000000454E18 ""
 *   insn=0x0000000000454E1C string=0x0000000000454E20 ""
 *   insn=0x0000000000454E20 string=0x0000000000454E24 ""
 *   insn=0x0000000000454E2C string=0x0000000000454E30 "x"
 *   insn=0x0000000000454E30 string=0x0000000000454E34 "z"
 *   insn=0x0000000000454E38 string=0x0000000000454E3C "|"
 *   insn=0x0000000000454E40 string=0x0000000000454E44 "h"
 *   insn=0x0000000000454E4C string=0x0000000000454E50 ""
 *   insn=0x0000000000454E54 string=0x0000000000454E58 "A"
 *   insn=0x0000000000454E80 string=0x0000000000454E84 " "
 *   insn=0x0000000000454E88 string=0x0000000000454E8C "ht"
 *   insn=0x0000000000454E8C string=0x0000000000454E98 "K"
 *   insn=0x0000000000454E98 string=0x0000000000454E9C "h"
 *   insn=0x0000000000454E9C string=0x0000000000454EA0 "J"
 *   insn=0x0000000000454EA0 string=0x0000000000454EA4 "k"
 *   insn=0x0000000000454EA4 string=0x0000000000454EA8 "Jt"
 *   insn=0x0000000000454EA8 string=0x0000000000454EAC "k}"
 *   insn=0x0000000000454EB0 string=0x0000000000454EB4 "l"
 *   insn=0x0000000000454EB4 string=0x0000000000454EB8 "\n]"
 *   insn=0x0000000000454ED0 string=0x0000000000454ED4 "W"
 *   insn=0x0000000000454ED8 string=0x0000000000454EDC "("
 *   insn=0x0000000000454EDC string=0x0000000000454EE0 "i"
 *   insn=0x0000000000454EDC string=0x0000000000455120 "]@"
 *   insn=0x0000000000454EE4 string=0x0000000000454EE8 ")"
 *   insn=0x0000000000454EEC string=0x0000000000454EF0 "8}"
 *   insn=0x0000000000454EF4 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000454EFC string=0x0000000000454F00 "\t"
 *   insn=0x0000000000454F08 string=0x0000000000454F0C "\t\t@"
 *   insn=0x0000000000454F0C string=0x0000000000454F10 ")"
 *   insn=0x0000000000454F10 string=0x0000000000454F14 "\t\t"
 *   insn=0x0000000000454F18 string=0x0000000000454F1C ""
 *   insn=0x0000000000454F1C string=0x0000000000454F20 "W"
 *   insn=0x0000000000454F50 string=0x0000000000454F54 "@"
 *   insn=0x0000000000454F58 string=0x0000000000454F5C "*"
 *   insn=0x0000000000454F5C string=0x0000000000454F60 "\n"
 *   insn=0x0000000000454F64 string=0x0000000000454F68 "K\t@"
 *   insn=0x0000000000454F64 string=0x0000000000454F74 " "
 *   insn=0x0000000000454F68 string=0x0000000000454F6C "k"
 *   insn=0x0000000000454F6C string=0x0000000000454F70 "K\t"
 *   insn=0x0000000000454F78 string=0x0000000000454F7C "*"
 *   insn=0x0000000000454F7C string=0x0000000000454F80 "\n"
 *   insn=0x0000000000454F80 string=0x0000000000454F84 "*"
 *   insn=0x0000000000454F84 string=0x0000000000454F88 "\n"
 *   insn=0x0000000000454F88 string=0x0000000000454F8C "*!@"
 *   insn=0x0000000000454F8C string=0x0000000000454F90 "\n!"
 *   insn=0x0000000000454F90 string=0x0000000000454F94 "*%@"
 *   insn=0x0000000000454F94 string=0x0000000000454F98 "\n%"
 *   insn=0x0000000000454F98 string=0x0000000000454F9C "*)@"
 *   insn=0x0000000000454F9C string=0x0000000000454FA0 "\n)"
 *   insn=0x0000000000454FA0 string=0x0000000000454FA4 "*-@"
 *   insn=0x0000000000454FA4 string=0x0000000000454FA8 "\n-"
 *   insn=0x0000000000454FA8 string=0x0000000000454FAC "*1@"
 *   insn=0x0000000000454FAC string=0x0000000000454FB0 "\n1"
 *   insn=0x0000000000454FB0 string=0x0000000000454FB4 "*5@"
 *   insn=0x0000000000454FB4 string=0x0000000000454FB8 "\n5"
 *   insn=0x0000000000454FB8 string=0x0000000000454FBC "*9@"
 *   insn=0x0000000000454FBC string=0x0000000000454FC0 "\n9"
 *   insn=0x0000000000454FC0 string=0x0000000000454FC4 "*=@"
 *   insn=0x0000000000454FC4 string=0x0000000000454FC8 "\n="
 *   insn=0x0000000000454FC8 string=0x0000000000454FCC "*A@"
 *   insn=0x0000000000454FCC string=0x0000000000454FD0 "\nA"
 *   insn=0x0000000000454FD0 string=0x0000000000454FD4 "*E@"
 *   insn=0x0000000000454FD4 string=0x0000000000454FD8 "\nE"
 *   insn=0x0000000000454FD8 string=0x0000000000454FDC "*%@"
 *   insn=0x0000000000454FDC string=0x0000000000454FE0 "\n%"
 *   insn=0x0000000000454FE0 string=0x0000000000454FE4 "*)@"
 *   insn=0x0000000000454FE4 string=0x0000000000454FE8 ")a"
 *   insn=0x0000000000454FE8 string=0x0000000000454FEC "?"
 *   insn=0x0000000000454FEC string=0x0000000000454FF0 "\n)"
 *   insn=0x0000000000454FF0 string=0x0000000000454FF4 "a"
 *   insn=0x0000000000454FF4 string=0x0000000000454FF8 "!"
 *   insn=0x0000000000455000 string=0x0000000000455004 "?"
 *   insn=0x0000000000455004 string=0x0000000000455008 " "
 *   insn=0x0000000000455008 string=0x000000000045500C "h"
 *   insn=0x000000000045500C string=0x0000000000455010 ""
 *   insn=0x0000000000455014 string=0x0000000000455018 "\t\t@"
 *   insn=0x0000000000455014 string=0x0000000000455024 "`"
 *   insn=0x0000000000455018 string=0x000000000045501C ")"
 *   insn=0x000000000045501C string=0x0000000000455020 "\t\t"
 *   insn=0x0000000000455028 string=0x000000000045502C "h"
 *   insn=0x000000000045502C string=0x0000000000455030 ""
 *   insn=0x0000000000455030 string=0x0000000000455034 "h"
 *   insn=0x0000000000455034 string=0x0000000000455038 ""
 *   insn=0x0000000000455038 string=0x000000000045503C "h"@"
 *   insn=0x000000000045503C string=0x0000000000455040 "#"
 *   insn=0x0000000000455040 string=0x0000000000455044 "h&@"
 *   insn=0x0000000000455044 string=0x0000000000455048 "'"
 *   insn=0x0000000000455048 string=0x000000000045504C "h*@"
 *   insn=0x000000000045504C string=0x0000000000455050 "+"
 *   insn=0x0000000000455050 string=0x0000000000455054 "h.@"
 *   insn=0x0000000000455054 string=0x0000000000455058 "/"
 *   insn=0x0000000000455058 string=0x000000000045505C "h2@"
 *   insn=0x000000000045505C string=0x0000000000455060 "3"
 *   insn=0x0000000000455060 string=0x0000000000455064 "h6@"
 *   insn=0x0000000000455064 string=0x0000000000455068 "7"
 *   insn=0x0000000000455068 string=0x000000000045506C "h:@"
 *   insn=0x000000000045506C string=0x0000000000455070 ";"
 *   insn=0x0000000000455070 string=0x0000000000455074 "h>@"
 *   insn=0x0000000000455074 string=0x0000000000455078 "?"
 *   insn=0x0000000000455078 string=0x000000000045507C "hB@"
 *   insn=0x000000000045507C string=0x0000000000455080 "C"
 *   insn=0x0000000000455080 string=0x0000000000455084 "hF@"
 *   insn=0x0000000000455084 string=0x0000000000455088 "G"
 *   insn=0x0000000000455088 string=0x000000000045508C "h&@"
 *   insn=0x000000000045508C string=0x0000000000455090 "'"
 *   insn=0x0000000000455090 string=0x0000000000455094 "h*@"
 *   insn=0x0000000000455094 string=0x0000000000455098 "sb"
 *   insn=0x000000000045509C string=0x00000000004550A0 "+"
 *   insn=0x00000000004550A4 string=0x00000000004550A8 "!"
 *   insn=0x00000000004550B8 string=0x00000000004550BC "@"
 *   insn=0x00000000004550BC string=0x00000000004550C0 ""
 *   insn=0x00000000004550C0 string=0x00000000004550C4 ""
 *   insn=0x00000000004550C8 string=0x00000000004550CC ""
 *   insn=0x00000000004550CC string=0x00000000004550D0 ""
 *   insn=0x00000000004550D8 string=0x00000000004550DC "?"
 *   insn=0x00000000004550E4 string=0x00000000004550E8 "@"
 *   insn=0x00000000004550E8 string=0x00000000004550EC "q"
 *   insn=0x00000000004550E8 string=0x00000000004550F0 ""
 *   insn=0x00000000004550EC string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000455124 string=0x0000000000455128 "4"
 *   insn=0x000000000045512C string=0x0000000000455130 ""
 *   insn=0x000000000045513C string=0x0000000000455140 ""
 *   insn=0x0000000000455150 string=0x0000000000455154 "~"
 *   insn=0x0000000000455178 string=0x000000000045517C "K"
 *   insn=0x000000000045517C string=0x0000000000455180 "it"
 *   insn=0x0000000000455180 string=0x0000000000455190 "}"
 *   insn=0x0000000000455190 string=0x0000000000455194 ""
 *   insn=0x00000000004551A0 string=0x00000000004551A4 ""
 *   insn=0x00000000004551A8 string=0x00000000004551AC "\t\t@"
 *   insn=0x00000000004551A8 string=0x00000000004551B8 "w"
 *   insn=0x00000000004551AC string=0x00000000004551B0 ")"
 *   insn=0x00000000004551B0 string=0x00000000004551B4 "\t\t"
 *   insn=0x00000000004551C4 string=0x00000000004551C8 "@"
 *   insn=0x00000000004551C8 string=0x00000000004551CC ""
 *   insn=0x00000000004551CC string=0x00000000004551D0 ""
 *   insn=0x00000000004551D4 string=0x00000000004551D8 ""
 *   insn=0x00000000004551D8 string=0x00000000004551DC ""
 *   insn=0x00000000004551F8 string=0x00000000004551FC "\t"
 *   insn=0x0000000000455200 string=0x0000000000455204 "\t"
 *   insn=0x0000000000455208 string=0x000000000045520C "\t"
 *   insn=0x0000000000455210 string=0x0000000000455214 "\t"
 *   insn=0x0000000000455218 string=0x000000000045521C "\t"
 *   insn=0x0000000000455220 string=0x0000000000455224 "\t"
 *   insn=0x0000000000455228 string=0x000000000045522C "\t"
 *   insn=0x0000000000455230 string=0x0000000000455234 ""
 *   insn=0x0000000000455238 string=0x000000000045523C ","
 *   insn=0x000000000045523C string=0x0000000000455240 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<Caver::ParticleType>::_M_insert_aux(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x2
  __int64 v6; // x19
  __int64 v7; // x8
  __int128 v8; // q1
  __int128 v9; // q2
  __int128 v10; // q3
  __int128 v11; // q4
  _DWORD *v12; // x20
  __int64 v13; // x28
  __int64 v14; // x21
  __int64 v15; // x23
  __int64 v16; // x24
  __int64 v17; // x25
  __int64 v18; // x26
  __int64 v19; // x27
  __int64 v20; // x8
  __int64 v21; // x22
  _DWORD *v22; // x0
  int v23; // w8
  int v24; // w8
  __int64 v25; // x11
  __int64 v26; // x12
  bool v27; // cf
  unsigned __int64 v28; // x11
  int v29; // w12
  unsigned __int64 v30; // x23
  __int64 v31; // x24
  __int64 v32; // x0
  _DWORD *v33; // x8
  __int64 v34; // x21
  __int64 v35; // x8
  _DWORD **v36; // x22
  __int64 v37; // x8
  __int64 *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x10
  _DWORD **v41; // x25
  __int64 i; // x24
  _DWORD *v43; // x8
  __int64 v44; // x8
  _DWORD *v45; // x0
  int v46; // w8
  __int64 v47; // [xsp+40h] [xbp-60h]
  __int64 v48; // [xsp+48h] [xbp-58h]

  v5 = a1[1];
  v6 = a2;
  if ( v5 == a1[2] )
  {
    v25 = 0x2E8BA2E8BA2E8BA3LL * ((v5 - *a1) >> 3);
    if ( v5 == *a1 )
      v26 = 1;
    else
      v26 = 0x2E8BA2E8BA2E8BA3LL * ((v5 - *a1) >> 3);
    v27 = __CFADD__(v26, v25);
    v28 = v26 + v25;
    v29 = v27;
    if ( v29 | (v28 > 0x2E8BA2E8BA2E8BALL) )
      v30 = 0x2E8BA2E8BA2E8BALL;
    else
      v30 = v28;
    if ( v30 > 0x2E8BA2E8BA2E8BALL )
      sub_565294(a1, a2, v5);
    v31 = 0x2E8BA2E8BA2E8BA3LL * ((a2 - *a1) >> 3);
    v32 = operator new(88 * v30);
    v33 = *(_DWORD **)a3;
    v34 = v32;
    *(_QWORD *)(v32 + 88 * v31) = *(_QWORD *)a3;
    if ( v33 )
      ++v33[2];
    v35 = v32 + 88 * v31;
    *(_OWORD *)(v35 + 8) = *(_OWORD *)(a3 + 8);
    *(_OWORD *)(v35 + 24) = *(_OWORD *)(a3 + 24);
    *(_OWORD *)(v35 + 40) = *(_OWORD *)(a3 + 40);
    *(_OWORD *)(v35 + 56) = *(_OWORD *)(a3 + 56);
    *(_OWORD *)(v35 + 72) = *(_OWORD *)(a3 + 72);
    v36 = (_DWORD **)*a1;
    v37 = v32;
    if ( *a1 != v6 )
    {
      v38 = (__int64 *)*a1;
      do
      {
        v39 = *v38;
        *(_QWORD *)v37 = *v38;
        if ( v39 )
          ++*(_DWORD *)(v39 + 8);
        *(_OWORD *)(v37 + 8) = *(_OWORD *)(v38 + 1);
        *(_DWORD *)(v37 + 24) = *((_DWORD *)v38 + 6);
        *(_DWORD *)(v37 + 28) = *((_DWORD *)v38 + 7);
        *(_DWORD *)(v37 + 32) = *((_DWORD *)v38 + 8);
        *(_DWORD *)(v37 + 36) = *((_DWORD *)v38 + 9);
        *(_DWORD *)(v37 + 40) = *((_DWORD *)v38 + 10);
        *(_DWORD *)(v37 + 44) = *((_DWORD *)v38 + 11);
        *(_DWORD *)(v37 + 48) = *((_DWORD *)v38 + 12);
        *(_DWORD *)(v37 + 52) = *((_DWORD *)v38 + 13);
        *(_DWORD *)(v37 + 56) = *((_DWORD *)v38 + 14);
        *(_DWORD *)(v37 + 60) = *((_DWORD *)v38 + 15);
        *(_DWORD *)(v37 + 64) = *((_DWORD *)v38 + 16);
        *(_DWORD *)(v37 + 68) = *((_DWORD *)v38 + 17);
        *(_QWORD *)(v37 + 72) = v38[9];
        v40 = v38[10];
        v38 += 11;
        *(_QWORD *)(v37 + 80) = v40;
        v37 += 88;
      }
      while ( v38 != (__int64 *)v6 );
    }
    v41 = (_DWORD **)a1[1];
    for ( i = v37 + 88; (_DWORD **)v6 != v41; i += 88 )
    {
      v43 = *(_DWORD **)v6;
      *(_QWORD *)i = *(_QWORD *)v6;
      if ( v43 )
        ++v43[2];
      *(_OWORD *)(i + 8) = *(_OWORD *)(v6 + 8);
      *(_DWORD *)(i + 24) = *(_DWORD *)(v6 + 24);
      *(_DWORD *)(i + 28) = *(_DWORD *)(v6 + 28);
      *(_DWORD *)(i + 32) = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(i + 36) = *(_DWORD *)(v6 + 36);
      *(_DWORD *)(i + 40) = *(_DWORD *)(v6 + 40);
      *(_DWORD *)(i + 44) = *(_DWORD *)(v6 + 44);
      *(_DWORD *)(i + 48) = *(_DWORD *)(v6 + 48);
      *(_DWORD *)(i + 52) = *(_DWORD *)(v6 + 52);
      *(_DWORD *)(i + 56) = *(_DWORD *)(v6 + 56);
      *(_DWORD *)(i + 60) = *(_DWORD *)(v6 + 60);
      *(_DWORD *)(i + 64) = *(_DWORD *)(v6 + 64);
      *(_DWORD *)(i + 68) = *(_DWORD *)(v6 + 68);
      *(_QWORD *)(i + 72) = *(_QWORD *)(v6 + 72);
      v44 = *(_QWORD *)(v6 + 80);
      v6 += 88;
      *(_QWORD *)(i + 80) = v44;
    }
    for ( ; v41 != v36; v36 += 11 )
    {
      v45 = *v36;
      if ( *v36 )
      {
        v46 = v45[2] - 1;
        v45[2] = v46;
        if ( !v46 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v45 + 8LL))(v45);
      }
    }
    if ( *a1 )
      operator delete((void *)*a1);
    *a1 = v34;
    a1[1] = i;
    a1[2] = v34 + 88 * v30;
  }
  else
  {
    v7 = *(_QWORD *)(v5 - 88);
    *(_QWORD *)v5 = v7;
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    v8 = *(_OWORD *)(v5 - 64);
    v9 = *(_OWORD *)(v5 - 48);
    v10 = *(_OWORD *)(v5 - 32);
    v11 = *(_OWORD *)(v5 - 16);
    *(_OWORD *)(v5 + 8) = *(_OWORD *)(v5 - 80);
    *(_OWORD *)(v5 + 24) = v8;
    *(_OWORD *)(v5 + 40) = v9;
    *(_OWORD *)(v5 + 56) = v10;
    *(_OWORD *)(v5 + 72) = v11;
    a1[1] = v5 + 88;
    v12 = *(_DWORD **)a3;
    if ( *(_QWORD *)a3 )
      ++v12[2];
    v13 = *(_QWORD *)(a3 + 56);
    v14 = *(_QWORD *)(a3 + 8);
    v15 = *(_QWORD *)(a3 + 16);
    v16 = *(_QWORD *)(a3 + 24);
    v17 = *(_QWORD *)(a3 + 32);
    v18 = *(_QWORD *)(a3 + 40);
    v19 = *(_QWORD *)(a3 + 48);
    v48 = *(_QWORD *)(a3 + 64);
    v20 = *(_QWORD *)(a3 + 72);
    v21 = *(_QWORD *)(a3 + 80);
    v47 = v20;
    std::copy_backward<Caver::ParticleType *,Caver::ParticleType *>();
    if ( v12 )
      ++v12[2];
    v22 = *(_DWORD **)v6;
    *(_QWORD *)v6 = v12;
    if ( v22 )
    {
      v23 = v22[2] - 1;
      v22[2] = v23;
      if ( !v23 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 8LL))(v22);
    }
    *(_QWORD *)(v6 + 8) = v14;
    *(_QWORD *)(v6 + 16) = v15;
    *(_QWORD *)(v6 + 24) = v16;
    *(_QWORD *)(v6 + 32) = v17;
    *(_QWORD *)(v6 + 40) = v18;
    *(_QWORD *)(v6 + 48) = v19;
    *(_QWORD *)(v6 + 56) = v13;
    *(_QWORD *)(v6 + 64) = v48;
    *(_QWORD *)(v6 + 72) = v47;
    *(_QWORD *)(v6 + 80) = v21;
    if ( v12 )
    {
      v24 = v12[2] - 1;
      v12[2] = v24;
      if ( !v24 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
}

