/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051906C
 * Mangled: _Z34PVRTTextureLoadFromPVRResourceFileR17CPVRTResourceFilePjPKvbjPiS4_
 * Demangled: PVRTTextureLoadFromPVRResourceFile(CPVRTResourceFile &,uint *,void const*,bool,uint,int *,int *)
 *
 * Callers: 1
 *   0x00000000001FE730  PVRTTextureLoadFromPVRResourceFile(CPVRTResourceFile &,uint *,void const*,bool,uint,int *,int *)
 *
 * Callees: 6
 *   0x00000000001F3DE0  PVRTTextureLoadFromPointer(void const*,uint *,void const*,bool,uint,void const*,int *,int *)
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F89E0  .free
 *   0x00000000001FCB40  CPVRTResourceFile::DataPtr(void)
 *   0x00000000001FD7E0  CPVRTResourceFile::IsOpen(void)
 *
 * Referenced strings: 177
 *   insn=0x0000000000519088 string=0x000000000051908C "\"
 *   insn=0x00000000005190B4 string=0x00000000001FD7E0 "0'"
 *   insn=0x00000000005190B8 string=0x00000000005190BC "h"
 *   insn=0x00000000005190BC string=0x00000000005190C0 "}D"
 *   insn=0x00000000005190C0 string=0x00000000005190C4 "\t"
 *   insn=0x00000000005190C8 string=0x00000000005190CC "h"
 *   insn=0x00000000005190C8 string=0x0000000000519424 "i"
 *   insn=0x00000000005190CC string=0x00000000005190D0 ""
 *   insn=0x00000000005190D0 string=0x00000000005190D4 ""
 *   insn=0x00000000005190D4 string=0x00000000005190D8 ""
 *   insn=0x00000000005190E0 string=0x00000000001FCB40 "0'"
 *   insn=0x0000000000519100 string=0x0000000000519104 "\n0@"
 *   insn=0x000000000051910C string=0x0000000000519110 "Kii8Lih8Ki(8"
 *   insn=0x0000000000519110 string=0x0000000000519114 "Lih8Ki(8"
 *   insn=0x0000000000519114 string=0x0000000000519118 "Ki(8"
 *   insn=0x0000000000519118 string=0x000000000051911C ""
 *   insn=0x000000000051911C string=0x0000000000519120 "Li)8)"
 *   insn=0x0000000000519120 string=0x0000000000519124 ")"
 *   insn=0x0000000000519128 string=0x000000000051912C "+"
 *   insn=0x0000000000519138 string=0x000000000051913C "Kih8Lii8"
 *   insn=0x000000000051913C string=0x0000000000519140 "Lii8"
 *   insn=0x0000000000519140 string=0x0000000000519144 ""
 *   insn=0x0000000000519144 string=0x0000000000519148 "."
 *   insn=0x0000000000519148 string=0x000000000051914C "Ki)8Li(8)"
 *   insn=0x000000000051914C string=0x0000000000519150 "Li(8)"
 *   insn=0x0000000000519150 string=0x0000000000519154 ")"
 *   insn=0x0000000000519158 string=0x000000000051915C ""
 *   insn=0x0000000000519164 string=0x0000000000519168 "h"
 *   insn=0x000000000051916C string=0x0000000000519170 "Kih8Lii8%"
 *   insn=0x0000000000519170 string=0x0000000000519174 "Lii8%"
 *   insn=0x0000000000519174 string=0x0000000000519178 "%"
 *   insn=0x0000000000519178 string=0x000000000051917C "."
 *   insn=0x000000000051917C string=0x0000000000519180 "Ki)8Li(8)"
 *   insn=0x0000000000519180 string=0x0000000000519184 "Li(8)"
 *   insn=0x0000000000519184 string=0x0000000000519188 ")"
 *   insn=0x000000000051918C string=0x0000000000519190 ""
 *   insn=0x00000000005191A0 string=0x00000000005191A4 "Kih8Lii85"
 *   insn=0x00000000005191A4 string=0x00000000005191A8 "Lii85"
 *   insn=0x00000000005191A8 string=0x00000000005191AC "5"
 *   insn=0x00000000005191AC string=0x00000000005191B0 ".-"
 *   insn=0x00000000005191B0 string=0x00000000005191B4 "Ki)8Li(8)"
 *   insn=0x00000000005191B4 string=0x00000000005191B8 "Li(8)"
 *   insn=0x00000000005191B8 string=0x00000000005191BC ")"
 *   insn=0x00000000005191C0 string=0x00000000005191C4 ""
 *   insn=0x00000000005191CC string=0x00000000005191D0 "h"
 *   insn=0x00000000005191D4 string=0x00000000005191D8 "Kih8Lii8E"
 *   insn=0x00000000005191D8 string=0x00000000005191DC "Lii8E"
 *   insn=0x00000000005191DC string=0x00000000005191E0 "E"
 *   insn=0x00000000005191E0 string=0x00000000005191E4 ".="
 *   insn=0x00000000005191E4 string=0x00000000005191E8 "Ki)8Li(8)"
 *   insn=0x00000000005191E8 string=0x00000000005191EC "Li(8)"
 *   insn=0x00000000005191EC string=0x00000000005191F0 ")"
 *   insn=0x00000000005191F4 string=0x00000000005191F8 ""
 *   insn=0x0000000000519208 string=0x000000000051920C "Kih8Lii8U"
 *   insn=0x000000000051920C string=0x0000000000519210 "Lii8U"
 *   insn=0x0000000000519210 string=0x0000000000519214 "U"
 *   insn=0x0000000000519214 string=0x0000000000519218 ".M"
 *   insn=0x0000000000519218 string=0x000000000051921C "Ki)8Li(8)"
 *   insn=0x000000000051921C string=0x0000000000519220 "Li(8)"
 *   insn=0x0000000000519220 string=0x0000000000519224 ")"
 *   insn=0x0000000000519228 string=0x000000000051922C ""
 *   insn=0x0000000000519234 string=0x0000000000519238 "h"
 *   insn=0x000000000051923C string=0x0000000000519240 "Kih8Lii8e"
 *   insn=0x0000000000519240 string=0x0000000000519244 "Lii8e"
 *   insn=0x0000000000519244 string=0x0000000000519248 "e"
 *   insn=0x0000000000519248 string=0x000000000051924C ".]"
 *   insn=0x000000000051924C string=0x0000000000519250 "Ki)8Li(8)"
 *   insn=0x0000000000519250 string=0x0000000000519254 "Li(8)"
 *   insn=0x0000000000519254 string=0x0000000000519258 ")"
 *   insn=0x000000000051925C string=0x0000000000519260 ""
 *   insn=0x0000000000519270 string=0x0000000000519274 "Kih8Lii8u"
 *   insn=0x0000000000519274 string=0x0000000000519278 "Lii8u"
 *   insn=0x0000000000519278 string=0x000000000051927C "u"
 *   insn=0x000000000051927C string=0x0000000000519280 ".m"
 *   insn=0x0000000000519280 string=0x0000000000519284 "Ki)8Li(8)"
 *   insn=0x0000000000519284 string=0x0000000000519288 "Li(8)"
 *   insn=0x0000000000519288 string=0x000000000051928C ")"
 *   insn=0x0000000000519290 string=0x0000000000519294 ""
 *   insn=0x000000000051929C string=0x00000000005192A0 "h"
 *   insn=0x00000000005192A4 string=0x00000000005192A8 "Kih8Lii8"
 *   insn=0x00000000005192A8 string=0x00000000005192AC "Lii8"
 *   insn=0x00000000005192AC string=0x00000000005192B0 ""
 *   insn=0x00000000005192B0 string=0x00000000005192B4 ".}"
 *   insn=0x00000000005192B4 string=0x00000000005192B8 "Ki)8Li(8)"
 *   insn=0x00000000005192B8 string=0x00000000005192BC "Li(8)"
 *   insn=0x00000000005192BC string=0x00000000005192C0 ")"
 *   insn=0x00000000005192C4 string=0x00000000005192C8 ""
 *   insn=0x00000000005192D8 string=0x00000000005192DC "Kih8Lii8"
 *   insn=0x00000000005192DC string=0x00000000005192E0 "Lii8"
 *   insn=0x00000000005192E0 string=0x00000000005192E4 ""
 *   insn=0x00000000005192E4 string=0x00000000005192E8 "."
 *   insn=0x00000000005192E8 string=0x00000000005192EC "Ki)8Li(8)"
 *   insn=0x00000000005192EC string=0x00000000005192F0 "Li(8)"
 *   insn=0x00000000005192F0 string=0x00000000005192F4 ")"
 *   insn=0x00000000005192F8 string=0x00000000005192FC ""
 *   insn=0x0000000000519300 string=0x0000000000519304 "\t"
 *   insn=0x0000000000519304 string=0x0000000000519308 "h"
 *   insn=0x000000000051930C string=0x0000000000519310 "Kih8Lii8"
 *   insn=0x0000000000519310 string=0x0000000000519314 "Lii8"
 *   insn=0x0000000000519314 string=0x0000000000519318 ""
 *   insn=0x0000000000519318 string=0x000000000051931C "."
 *   insn=0x000000000051931C string=0x0000000000519320 "Ki)8Li(8)"
 *   insn=0x0000000000519320 string=0x0000000000519324 "Li(8)"
 *   insn=0x0000000000519324 string=0x0000000000519328 ")"
 *   insn=0x000000000051932C string=0x0000000000519330 ""
 *   insn=0x0000000000519340 string=0x0000000000519344 "Kih8Lii8"
 *   insn=0x0000000000519344 string=0x0000000000519348 "Lii8"
 *   insn=0x0000000000519348 string=0x000000000051934C ""
 *   insn=0x000000000051934C string=0x0000000000519350 "."
 *   insn=0x0000000000519350 string=0x0000000000519354 "Ki)8Li(8)"
 *   insn=0x0000000000519354 string=0x0000000000519358 "Li(8)"
 *   insn=0x0000000000519358 string=0x000000000051935C ")"
 *   insn=0x0000000000519360 string=0x0000000000519364 ""
 *   insn=0x000000000051936C string=0x0000000000519370 "h"
 *   insn=0x0000000000519374 string=0x0000000000519378 "Kih8Lii8"
 *   insn=0x0000000000519378 string=0x000000000051937C "Lii8"
 *   insn=0x000000000051937C string=0x0000000000519380 ""
 *   insn=0x0000000000519380 string=0x0000000000519384 "."
 *   insn=0x0000000000519384 string=0x0000000000519388 "Ki)8Li(8)"
 *   insn=0x0000000000519388 string=0x000000000051938C "Li(8)"
 *   insn=0x000000000051938C string=0x0000000000519390 ")"
 *   insn=0x0000000000519394 string=0x0000000000519398 ""
 *   insn=0x00000000005193AC string=0x00000000005193B0 "(!"
 *   insn=0x00000000005193B0 string=0x00000000005193B4 "i"
 *   insn=0x00000000005193B8 string=0x00000000005193BC " "
 *   insn=0x00000000005193DC string=0x00000000005193E0 "h"
 *   insn=0x00000000005193DC string=0x00000000001F5E70 "P'"
 *   insn=0x00000000005193E4 string=0x00000000005193E8 "H"
 *   insn=0x00000000005193F0 string=0x00000000005193F4 """
 *   insn=0x00000000005193F4 string=0x00000000005194F8 "i{"
 *   insn=0x0000000000519400 string=0x0000000000519404 "j"
 *   insn=0x0000000000519404 string=0x00000000005195AC "*"
 *   insn=0x0000000000519418 string=0x0000000000519608 "2s"
 *   insn=0x0000000000519424 string=0x0000000000519428 ")"
 *   insn=0x000000000051942C string=0x0000000000519430 "\n"
 *   insn=0x0000000000519430 string=0x0000000000519434 "*"
 *   insn=0x0000000000519458 string=0x000000000051945C "aj"
 *   insn=0x000000000051945C string=0x00000000001F3DE0 "P'"
 *   insn=0x00000000005194AC string=0x00000000005194B0 "Lj"
 *   insn=0x00000000005194B4 string=0x00000000005194B8 "4\n"
 *   insn=0x00000000005194E8 string=0x00000000005194EC "=j"
 *   insn=0x00000000005194FC string=0x0000000000519500 "*"
 *   insn=0x0000000000519500 string=0x0000000000519504 "J"
 *   insn=0x000000000051950C string=0x0000000000519510 "J"
 *   insn=0x0000000000519514 string=0x0000000000519518 "_"
 *   insn=0x0000000000519524 string=0x0000000000519528 "!"
 *   insn=0x000000000051952C string=0x0000000000519530 "\tq~"
 *   insn=0x0000000000519530 string=0x0000000000519534 "J"
 *   insn=0x0000000000519534 string=0x0000000000519538 "J"
 *   insn=0x0000000000519540 string=0x0000000000519544 "M"
 *   insn=0x0000000000519544 string=0x0000000000519548 "N"
 *   insn=0x0000000000519548 string=0x000000000051954C "O"
 *   insn=0x000000000051954C string=0x0000000000519550 "P"
 *   insn=0x0000000000519564 string=0x0000000000519568 "! ."
 *   insn=0x000000000051956C string=0x0000000000519570 "!"
 *   insn=0x0000000000519574 string=0x0000000000519578 "<"
 *   insn=0x0000000000519578 string=0x000000000051957C "n"
 *   insn=0x000000000051957C string=0x0000000000519580 ".<"
 *   insn=0x0000000000519580 string=0x0000000000519584 "/"
 *   insn=0x0000000000519584 string=0x0000000000519588 "o"
 *   insn=0x0000000000519588 string=0x000000000051958C "m"
 *   insn=0x000000000051958C string=0x0000000000519590 "J!"
 *   insn=0x0000000000519594 string=0x0000000000519598 "n"
 *   insn=0x0000000000519598 string=0x000000000051959C "k!"
 *   insn=0x000000000051959C string=0x00000000005195A0 "!"
 *   insn=0x00000000005195A0 string=0x00000000005195A4 "?"
 *   insn=0x00000000005195AC string=0x00000000005195B0 "K"
 *   insn=0x00000000005195B4 string=0x00000000005195B8 "K"
 *   insn=0x00000000005195B8 string=0x00000000005195BC ""
 *   insn=0x00000000005195BC string=0x00000000005195C0 "i%@x"
 *   insn=0x00000000005195C0 string=0x00000000005195C4 ""
 *   insn=0x00000000005195C4 string=0x00000000005195C8 ")\t"
 *   insn=0x00000000005195C8 string=0x00000000005195CC ")}"
 *   insn=0x00000000005195CC string=0x00000000005195D0 "I%"
 *   insn=0x00000000005195D0 string=0x00000000005195D4 "a"
 *   insn=0x0000000000519600 string=0x00000000001F89E0 "0'"
 *   insn=0x0000000000519608 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTTextureLoadFromPVRResourceFile(
        CPVRTResourceFile *a1,
        unsigned int *a2,
        const void *a3,
        char a4,
        unsigned int a5,
        int *a6,
        int *a7)
{
  __int64 v14; // x0
  __int64 v15; // x8
  __int64 v16; // x9
  char v17; // w12
  __int64 v18; // x9
  __int64 v19; // x8
  char v20; // w12
  __int64 v21; // x14
  bool v22; // cc
  __int64 v23; // x9
  __int64 v24; // x8
  char v25; // w12
  __int64 v26; // x14
  __int64 v27; // x9
  __int64 v28; // x8
  char v29; // w12
  __int64 v30; // x14
  __int64 v31; // x9
  __int64 v32; // x8
  char v33; // w12
  __int64 v34; // x14
  __int64 v35; // x9
  __int64 v36; // x8
  char v37; // w12
  __int64 v38; // x14
  __int64 v39; // x9
  __int64 v40; // x8
  char v41; // w12
  __int64 v42; // x14
  __int64 v43; // x9
  __int64 v44; // x8
  char v45; // w12
  __int64 v46; // x14
  __int64 v47; // x9
  __int64 v48; // x8
  char v49; // w12
  __int64 v50; // x14
  __int64 v51; // x9
  __int64 v52; // x8
  char v53; // w12
  __int64 v54; // x14
  __int64 v55; // x9
  __int64 v56; // x8
  char v57; // w12
  __int64 v58; // x14
  __int64 v59; // x9
  __int64 v60; // x8
  char v61; // w12
  __int64 v62; // x14
  __int64 v63; // x9
  __int64 v64; // x8
  char v65; // w12
  __int64 v66; // x14
  __int64 v67; // x0
  unsigned int v68; // w27
  __int64 v69; // x25
  __int64 v70; // x26
  _WORD *v71; // x0
  unsigned int v72; // w8
  void *v73; // x20
  int *v74; // x7
  __int64 v75; // x9
  __int64 v76; // x17
  unsigned int v77; // w19
  const void *v79; // x0
  __int64 v80; // x0
  __int64 v81; // x9
  unsigned __int16 *v82; // x10
  _WORD *v83; // x11
  __int64 v84; // x12
  int8x8_t v85; // d0
  int8x8_t v86; // d1
  unsigned __int64 v87; // d0
  unsigned __int64 v88; // d1
  _WORD *v89; // x10
  unsigned __int16 *v90; // x11
  __int64 v91; // x8
  unsigned int v92; // t1
  int *v93; // [xsp+8h] [xbp-98h]
  __int128 v94; // [xsp+10h] [xbp-90h] BYREF
  size_t byte_count[2]; // [xsp+20h] [xbp-80h]
  __int128 v96; // [xsp+30h] [xbp-70h]
  int v97; // [xsp+40h] [xbp-60h]
  __int64 v98; // [xsp+48h] [xbp-58h]

  v98 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (CPVRTResourceFile::IsOpen(a1) & 1) == 0 )
    return 1;
  if ( PVRTIsLittleEndian(void)::bIsInit )
  {
    if ( !PVRTIsLittleEndian(void)::bLittleEndian )
    {
      v14 = CPVRTResourceFile::DataPtr(a1);
      v15 = 0;
      v16 = 3;
      v94 = *(_OWORD *)v14;
      *(_OWORD *)byte_count = *(_OWORD *)(v14 + 16);
      v96 = *(_OWORD *)(v14 + 32);
      v97 = *(_DWORD *)(v14 + 48);
      do
      {
        v17 = *((_BYTE *)&byte_count[-2] + v15);
        *((_BYTE *)&byte_count[-2] + v15++) = *((_BYTE *)&byte_count[-2] + v16);
        *((_BYTE *)&byte_count[-2] + v16--) = v17;
      }
      while ( v15 < v16 );
      v18 = 4;
      v19 = 7;
      do
      {
        v20 = *((_BYTE *)&byte_count[-2] + v18);
        v21 = v18 - 3;
        *((_BYTE *)&byte_count[-2] + v18) = *((_BYTE *)&byte_count[-2] + v19);
        *((_BYTE *)&byte_count[-2] + v19) = v20;
        ++v18;
        v22 = v21 < v19 - 5;
        --v19;
      }
      while ( v22 );
      v23 = 8;
      v24 = 11;
      do
      {
        v25 = *((_BYTE *)&byte_count[-2] + v23);
        v26 = v23 - 7;
        *((_BYTE *)&byte_count[-2] + v23) = *((_BYTE *)&byte_count[-2] + v24);
        *((_BYTE *)&byte_count[-2] + v24) = v25;
        ++v23;
        v22 = v26 < v24 - 9;
        --v24;
      }
      while ( v22 );
      v27 = 12;
      v28 = 15;
      do
      {
        v29 = *((_BYTE *)&byte_count[-2] + v27);
        v30 = v27 - 11;
        *((_BYTE *)&byte_count[-2] + v27) = *((_BYTE *)&byte_count[-2] + v28);
        *((_BYTE *)&byte_count[-2] + v28) = v29;
        ++v27;
        v22 = v30 < v28 - 13;
        --v28;
      }
      while ( v22 );
      v31 = 16;
      v32 = 19;
      do
      {
        v33 = *((_BYTE *)&byte_count[-2] + v31);
        v34 = v31 - 15;
        *((_BYTE *)&byte_count[-2] + v31) = *((_BYTE *)&byte_count[-2] + v32);
        *((_BYTE *)&byte_count[-2] + v32) = v33;
        ++v31;
        v22 = v34 < v32 - 17;
        --v32;
      }
      while ( v22 );
      v35 = 20;
      v36 = 23;
      do
      {
        v37 = *((_BYTE *)&byte_count[-2] + v35);
        v38 = v35 - 19;
        *((_BYTE *)&byte_count[-2] + v35) = *((_BYTE *)&byte_count[-2] + v36);
        *((_BYTE *)&byte_count[-2] + v36) = v37;
        ++v35;
        v22 = v38 < v36 - 21;
        --v36;
      }
      while ( v22 );
      v39 = 24;
      v40 = 27;
      do
      {
        v41 = *((_BYTE *)&byte_count[-2] + v39);
        v42 = v39 - 23;
        *((_BYTE *)&byte_count[-2] + v39) = *((_BYTE *)&byte_count[-2] + v40);
        *((_BYTE *)&byte_count[-2] + v40) = v41;
        ++v39;
        v22 = v42 < v40 - 25;
        --v40;
      }
      while ( v22 );
      v43 = 28;
      v44 = 31;
      do
      {
        v45 = *((_BYTE *)&byte_count[-2] + v43);
        v46 = v43 - 27;
        *((_BYTE *)&byte_count[-2] + v43) = *((_BYTE *)&byte_count[-2] + v44);
        *((_BYTE *)&byte_count[-2] + v44) = v45;
        ++v43;
        v22 = v46 < v44 - 29;
        --v44;
      }
      while ( v22 );
      v47 = 32;
      v48 = 35;
      do
      {
        v49 = *((_BYTE *)&byte_count[-2] + v47);
        v50 = v47 - 31;
        *((_BYTE *)&byte_count[-2] + v47) = *((_BYTE *)&byte_count[-2] + v48);
        *((_BYTE *)&byte_count[-2] + v48) = v49;
        ++v47;
        v22 = v50 < v48 - 33;
        --v48;
      }
      while ( v22 );
      v51 = 36;
      v52 = 39;
      do
      {
        v53 = *((_BYTE *)&byte_count[-2] + v51);
        v54 = v51 - 35;
        *((_BYTE *)&byte_count[-2] + v51) = *((_BYTE *)&byte_count[-2] + v52);
        *((_BYTE *)&byte_count[-2] + v52) = v53;
        ++v51;
        v22 = v54 < v52 - 37;
        --v52;
      }
      while ( v22 );
      v55 = 40;
      v56 = 43;
      do
      {
        v57 = *((_BYTE *)&byte_count[-2] + v55);
        v58 = v55 - 39;
        *((_BYTE *)&byte_count[-2] + v55) = *((_BYTE *)&byte_count[-2] + v56);
        *((_BYTE *)&byte_count[-2] + v56) = v57;
        ++v55;
        v22 = v58 < v56 - 41;
        --v56;
      }
      while ( v22 );
      v59 = 44;
      v60 = 47;
      do
      {
        v61 = *((_BYTE *)&byte_count[-2] + v59);
        v62 = v59 - 43;
        *((_BYTE *)&byte_count[-2] + v59) = *((_BYTE *)&byte_count[-2] + v60);
        *((_BYTE *)&byte_count[-2] + v60) = v61;
        ++v59;
        v22 = v62 < v60 - 45;
        --v60;
      }
      while ( v22 );
      v63 = 48;
      v64 = 51;
      do
      {
        v65 = *((_BYTE *)&byte_count[-2] + v63);
        v66 = v63 - 47;
        *((_BYTE *)&byte_count[-2] + v63) = *((_BYTE *)&byte_count[-2] + v64);
        *((_BYTE *)&byte_count[-2] + v64) = v65;
        ++v63;
        v22 = v66 < v64 - 49;
        --v64;
      }
      while ( v22 );
      if ( LOBYTE(byte_count[0]) <= 0x13u && ((1 << SLOBYTE(byte_count[0])) & 0xB0000) != 0 )
      {
        v93 = a7;
        v67 = CPVRTResourceFile::DataPtr(a1);
        v68 = HIDWORD(byte_count[0]);
        v69 = (unsigned int)v94;
        v70 = v67;
        v71 = malloc(HIDWORD(byte_count[0]));
        v72 = v68 >> 1;
        v73 = v71;
        if ( !(v68 >> 1) )
        {
          v77 = PVRTTextureLoadFromPointer(&v94, a2, a3, a4 & 1, a5, v71, a6, v93);
          if ( !v73 )
            return v77;
          goto LABEL_51;
        }
        if ( v68 >= 8 )
        {
          v81 = v68 & 0xFFFFFFFE;
          v76 = v69;
          if ( (unsigned __int64)v71 >= v70 + v81 + v69 || v70 + v69 >= (unsigned __int64)v71 + v81 )
          {
            v74 = v93;
            v75 = v72 & 0x7FFFFFFC;
            v82 = (unsigned __int16 *)(v70 + v69 + 4);
            v83 = v71 + 2;
            v84 = v75;
            do
            {
              v85.n64_u32[0] = *(v82 - 2);
              v86.n64_u32[0] = *v82;
              v85.n64_u32[1] = *(v82 - 1);
              v86.n64_u32[1] = v82[1];
              v87 = vshr_n_u32(vrev32_s8(v85), 0x10u).n64_u64[0];
              v88 = vshr_n_u32(vrev32_s8(v86), 0x10u).n64_u64[0];
              *(v83 - 2) = v87;
              *v83 = v88;
              *(v83 - 1) = WORD2(v87);
              v82 += 4;
              v84 -= 4;
              v83[1] = WORD2(v88);
              v83 += 4;
            }
            while ( v84 );
            if ( v75 == v72 )
              goto LABEL_50;
          }
          else
          {
            v74 = v93;
            v75 = 0;
          }
        }
        else
        {
          v74 = v93;
          v75 = 0;
          v76 = v69;
        }
        v89 = &v71[v75];
        v90 = (unsigned __int16 *)(v70 + 2 * v75 + v76);
        v91 = v72 - v75;
        do
        {
          v92 = *v90++;
          --v91;
          *v89++ = bswap32(v92) >> 16;
        }
        while ( v91 );
LABEL_50:
        v77 = PVRTTextureLoadFromPointer(&v94, a2, a3, a4 & 1, a5, v71, a6, v74);
LABEL_51:
        free(v73);
        return v77;
      }
      v80 = CPVRTResourceFile::DataPtr(a1);
      return (unsigned int)PVRTTextureLoadFromPointer(
                             &v94,
                             a2,
                             a3,
                             a4 & 1,
                             a5,
                             (const void *)(v80 + (unsigned int)v94),
                             a6,
                             a7);
    }
  }
  else
  {
    PVRTIsLittleEndian(void)::bIsInit = 1;
    PVRTIsLittleEndian(void)::bLittleEndian = 1;
  }
  v79 = (const void *)CPVRTResourceFile::DataPtr(a1);
  return PVRTTextureLoadFromPointer(v79, a2, a3, a4 & 1, a5, 0, a6, a7);
}

