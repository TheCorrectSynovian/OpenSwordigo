/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C0F30
 * Mangled: _ZNSt6vectorIN5Caver7PolygonESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_
 * Demangled: std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Polygon*,std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>>,Caver::Polygon const&)
 *
 * Callers: 1
 *   0x00000000001F5520  std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Polygon*,std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>>,Caver::Polygon const&)
 *
 * Callees: 12
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000002006F0  std::__uninitialized_copy<false>::__uninit_copy<Caver::Polygon *,Caver::Polygon *>(Caver::Polygon *,Caver::Polygon *,Caver::Polygon *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203DE0  std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::operator=(std::vector<Caver::Vector2,std::allocator<Caver::Vector2>> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002C1554  std::__uninitialized_copy<false>::__uninit_copy<Caver::Polygon *,Caver::Polygon *>(Caver::Polygon *,Caver::Polygon *,Caver::Polygon *)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 138
 *   insn=0x00000000002C0F4C string=0x00000000002C0F50 "X"
 *   insn=0x00000000002C0F50 string=0x00000000002C0F54 ""
 *   insn=0x00000000002C0F6C string=0x00000000002C0F70 "@"
 *   insn=0x00000000002C0F90 string=0x00000000002C0FA4 ""
 *   insn=0x00000000002C0F98 string=0x00000000002C14C8 "s"
 *   insn=0x00000000002C0F9C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002C0FA4 string=0x00000000002C0FA8 "\n"
 *   insn=0x00000000002C0FB4 string=0x00000000002C0FB8 "J!"
 *   insn=0x00000000002C0FB8 string=0x00000000002C0FBC "K"
 *   insn=0x00000000002C0FBC string=0x00000000002C0FC0 "k"
 *   insn=0x00000000002C0FCC string=0x00000000002C0FD0 "+"
 *   insn=0x00000000002C0FCC string=0x00000000002C11C0 "L"
 *   insn=0x00000000002C0FDC string=0x00000000002C0FE0 "H"
 *   insn=0x00000000002C0FE0 string=0x00000000002C0FE4 ""
 *   insn=0x00000000002C0FF8 string=0x00000000002C0FFC ""
 *   insn=0x00000000002C1020 string=0x00000000002C1034 "\n"
 *   insn=0x00000000002C1024 string=0x00000000002C1028 "%"
 *   insn=0x00000000002C1028 string=0x00000000002C102C "m"
 *   insn=0x00000000002C1034 string=0x00000000002C1038 ""
 *   insn=0x00000000002C1044 string=0x00000000002C1048 "\n!"
 *   insn=0x00000000002C1048 string=0x00000000002C104C "J"
 *   insn=0x00000000002C104C string=0x00000000002C1050 "K"
 *   insn=0x00000000002C1050 string=0x00000000002C1054 "k"
 *   insn=0x00000000002C1060 string=0x00000000002C1064 "+"
 *   insn=0x00000000002C1070 string=0x00000000002C1074 "H"
 *   insn=0x00000000002C1074 string=0x00000000002C1078 ""
 *   insn=0x00000000002C108C string=0x00000000002C1090 "\tA"
 *   insn=0x00000000002C1090 string=0x00000000002C1094 ")"
 *   insn=0x00000000002C1094 string=0x00000000002C1098 "?"
 *   insn=0x00000000002C10A0 string=0x00000000002C10A8 ")}"
 *   insn=0x00000000002C10A8 string=0x00000000002C10AC ")"
 *   insn=0x00000000002C10AC string=0x00000000002C10B0 "4"
 *   insn=0x00000000002C10C4 string=0x00000000002C10C8 "F"
 *   insn=0x00000000002C10CC string=0x00000000002C10D0 "\t"
 *   insn=0x00000000002C10F8 string=0x00000000002C10FC "9"
 *   insn=0x00000000002C1100 string=0x00000000002C1104 "hB"
 *   insn=0x00000000002C110C string=0x00000000002C1110 "h"
 *   insn=0x00000000002C110C string=0x00000000002C13E0 ""
 *   insn=0x00000000002C1110 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002C1128 string=0x00000000002C112C "k"
 *   insn=0x00000000002C112C string=0x00000000002C1130 "k}"
 *   insn=0x00000000002C1130 string=0x00000000002C1134 "l"
 *   insn=0x00000000002C1150 string=0x00000000002C1154 "Y"
 *   insn=0x00000000002C1154 string=0x00000000002C1158 "?"
 *   insn=0x00000000002C1158 string=0x00000000002C115C "h"
 *   insn=0x00000000002C115C string=0x00000000002C1160 "i"
 *   insn=0x00000000002C1160 string=0x00000000002C1164 "*"
 *   insn=0x00000000002C1164 string=0x00000000002C1168 ")"
 *   insn=0x00000000002C1168 string=0x00000000002C116C "@"
 *   insn=0x00000000002C116C string=0x00000000002C1170 ":}"
 *   insn=0x00000000002C1170 string=0x00000000002C1174 ""
 *   insn=0x00000000002C117C string=0x00000000002C1180 "\t"
 *   insn=0x00000000002C1180 string=0x00000000002C1184 "[[\t"
 *   insn=0x00000000002C1184 string=0x00000000002C1188 "h"
 *   insn=0x00000000002C119C string=0x00000000002C11A0 " "
 *   insn=0x00000000002C11A4 string=0x00000000002C11A8 "H"
 *   insn=0x00000000002C11B8 string=0x00000000002C11BC "S"
 *   insn=0x00000000002C11BC string=0x00000000002C1308 "\n"
 *   insn=0x00000000002C11C0 string=0x00000000002C11C4 "/"
 *   insn=0x00000000002C11D8 string=0x00000000002C11DC ""
 *   insn=0x00000000002C11DC string=0x00000000002C11E0 "0"
 *   insn=0x00000000002C11E4 string=0x00000000002C11E8 "?"
 *   insn=0x00000000002C11F0 string=0x00000000002C11F4 "-"
 *   insn=0x00000000002C1208 string=0x00000000002C120C "."
 *   insn=0x00000000002C1218 string=0x00000000002C121C "m"
 *   insn=0x00000000002C1228 string=0x00000000002C122C "."
 *   insn=0x00000000002C122C string=0x00000000002C1230 ")"
 *   insn=0x00000000002C1234 string=0x00000000002C1238 " "
 *   insn=0x00000000002C1238 string=0x00000000002C123C """
 *   insn=0x00000000002C1248 string=0x00000000002C124C "a"
 *   insn=0x00000000002C1258 string=0x00000000002C125C "a"
 *   insn=0x00000000002C1264 string=0x00000000002C1268 "/"
 *   insn=0x00000000002C127C string=0x00000000002C1280 ""
 *   insn=0x00000000002C1280 string=0x00000000002C1284 "0"
 *   insn=0x00000000002C1288 string=0x00000000002C128C "?"
 *   insn=0x00000000002C1294 string=0x00000000002C1298 "-"
 *   insn=0x00000000002C12AC string=0x00000000002C12B0 "N"
 *   insn=0x00000000002C12B8 string=0x00000000002C12BC "M"
 *   insn=0x00000000002C12BC string=0x00000000002C12C0 "m"
 *   insn=0x00000000002C12CC string=0x00000000002C12D0 "."
 *   insn=0x00000000002C12D0 string=0x00000000002C12D4 ")"
 *   insn=0x00000000002C12D8 string=0x00000000002C12DC " "
 *   insn=0x00000000002C12DC string=0x00000000002C12E0 """
 *   insn=0x00000000002C12EC string=0x00000000002C12F0 "a"
 *   insn=0x00000000002C12F8 string=0x00000000002C12FC "A"
 *   insn=0x00000000002C12FC string=0x00000000002C1300 "]"
 *   insn=0x00000000002C1308 string=0x00000000002C130C "J[\n"
 *   insn=0x00000000002C130C string=0x00000000002C1310 "i"
 *   insn=0x00000000002C1310 string=0x00000000002C1314 "-"
 *   insn=0x00000000002C1314 string=0x00000000002C1318 "@"
 *   insn=0x00000000002C131C string=0x00000000002C1320 "M"
 *   insn=0x00000000002C1324 string=0x00000000002C135C "I"
 *   insn=0x00000000002C133C string=0x00000000002C1340 "m"
 *   insn=0x00000000002C1350 string=0x00000000002C1354 "("
 *   insn=0x00000000002C1354 string=0x00000000002C1358 "\t!"
 *   insn=0x00000000002C1360 string=0x00000000002C1364 "\t"
 *   insn=0x00000000002C1364 string=0x00000000002C1368 "I[\t"
 *   insn=0x00000000002C1368 string=0x00000000002C136C "(A"
 *   insn=0x00000000002C13A4 string=0x00000000002C13C4 "u"
 *   insn=0x00000000002C13A8 string=0x00000000002C13AC "@"
 *   insn=0x00000000002C13B8 string=0x00000000002C13BC "a"
 *   insn=0x00000000002C13C4 string=0x00000000002C13D0 ""
 *   insn=0x00000000002C13D0 string=0x00000000002C13D4 "(["
 *   insn=0x00000000002C1410 string=0x00000000002C1414 "r"
 *   insn=0x00000000002C1414 string=0x00000000002C1418 "1"
 *   insn=0x00000000002C1418 string=0x00000000002C141C "R"
 *   insn=0x00000000002C1420 string=0x00000000002C1424 "1"
 *   insn=0x00000000002C1428 string=0x00000000002C142C "/"
 *   insn=0x00000000002C142C string=0x00000000002C1430 "r"
 *   insn=0x00000000002C1430 string=0x00000000002C1434 " "
 *   insn=0x00000000002C143C string=0x00000000002C1440 "p"
 *   insn=0x00000000002C1458 string=0x00000000002C145C "1"
 *   insn=0x00000000002C1470 string=0x00000000002C1474 "1"
 *   insn=0x00000000002C1474 string=0x00000000002C1478 "."
 *   insn=0x00000000002C1478 string=0x00000000002C147C "p"
 *   insn=0x00000000002C147C string=0x00000000002C1480 "k"
 *   insn=0x00000000002C1484 string=0x00000000002C1488 "`"
 *   insn=0x00000000002C1488 string=0x00000000002C148C "b"
 *   insn=0x00000000002C148C string=0x00000000002C1490 "R""
 *   insn=0x00000000002C1490 string=0x00000000002C1494 " "
 *   insn=0x00000000002C1494 string=0x00000000002C1498 """
 *   insn=0x00000000002C1498 string=0x00000000002C149C "a"
 *   insn=0x00000000002C14CC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002C14D0 string=0x00000000002C14D4 "p"
 *   insn=0x00000000002C14DC string=0x00000000001F45E0 "P'"
 *   insn=0x00000000002C14E0 string=0x00000000002C1514 ""
 *   insn=0x00000000002C14EC string=0x00000000002C14F0 "`"
 *   insn=0x00000000002C14F0 string=0x00000000002C14F4 "@"
 *   insn=0x00000000002C14F4 string=0x00000000002C14F8 "n"
 *   insn=0x00000000002C14F4 string=0x00000000002C14FC "s"
 *   insn=0x00000000002C1500 string=0x00000000002C1504 "a"
 *   insn=0x00000000002C1508 string=0x00000000002C150C "i"
 *   insn=0x00000000002C1514 string=0x00000000002C1518 "H["
 *   insn=0x00000000002C151C string=0x00000000002C1520 "@"
 *   insn=0x00000000002C1520 string=0x00000000002C1524 "c"
 *   insn=0x00000000002C1530 string=0x00000000001FD590 "0'"
 *   insn=0x00000000002C1540 string=0x00000000002C1544 "@"
 *   insn=0x00000000002C1544 string=0x00000000002C1548 "Z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<Caver::Polygon>::_M_insert_aux(__int64 *a1, __int64 a2, int *a3)
{
  __int64 v6; // x22
  char *v7; // x8
  char *v8; // x9
  int v9; // w10
  unsigned __int64 v10; // x0
  unsigned __int64 v11; // x23
  unsigned __int64 v12; // x10
  unsigned __int64 v13; // x11
  _QWORD *v14; // x12
  __int64 v15; // t1
  __int16 v16; // w8
  int v17; // w22
  char *v18; // x8
  char *v19; // x9
  unsigned __int64 v20; // x0
  unsigned __int64 v21; // x11
  _QWORD *v22; // x12
  __int64 v23; // t1
  __int64 v24; // x8
  __int64 v25; // x9
  signed __int64 v26; // x20
  _WORD *v27; // x21
  unsigned __int64 v28; // x12
  unsigned __int64 v29; // x11
  _BOOL4 v30; // w12
  unsigned __int64 v31; // x25
  unsigned __int64 v32; // x26
  __int64 v33; // x22
  unsigned __int64 v34; // x27
  char *v35; // x8
  char *v36; // x11
  unsigned __int64 *v37; // x27
  unsigned __int64 v38; // x0
  unsigned __int64 v39; // x28
  unsigned __int64 v40; // x9
  unsigned __int64 v41; // x12
  unsigned __int64 v42; // x16
  bool v43; // w12
  bool v44; // w13
  __int64 v45; // x14
  _OWORD *v46; // x15
  char *v47; // x14
  __int128 *v48; // x9
  __int64 v49; // x16
  __int128 v50; // q0
  __int128 v51; // q1
  __int128 v52; // q2
  __int128 v53; // q3
  unsigned __int64 v54; // x12
  unsigned __int64 v55; // x14
  unsigned __int64 v56; // x15
  unsigned __int64 v57; // x16
  bool v58; // w12
  bool v59; // w13
  __int64 v60; // x14
  _OWORD *v61; // x15
  char *v62; // x14
  __int128 *v63; // x9
  __int64 v64; // x16
  __int128 v65; // q0
  __int128 v66; // q1
  __int128 v67; // q2
  __int128 v68; // q3
  unsigned __int64 v69; // x10
  unsigned __int64 *v70; // x10
  unsigned __int64 v71; // x12
  unsigned __int64 v72; // x13
  _QWORD *v73; // x14
  __int64 v74; // t1
  __int64 v75; // x19
  _QWORD *v76; // x21
  _QWORD *v77; // x23
  void *v78; // x0
  unsigned __int64 v79; // x14
  bool v80; // cf
  unsigned __int64 v81; // x18
  unsigned __int64 v82; // x0
  char v83; // w14
  __int64 v84; // x16
  _OWORD *v85; // x17
  char *v86; // x16
  __int128 *v87; // x11
  __int64 v88; // x18
  __int128 v89; // q0
  __int128 v90; // q1
  __int128 v91; // q2
  __int128 v92; // q3
  int v93; // [xsp+0h] [xbp-80h]
  void *p; // [xsp+8h] [xbp-78h]
  __int16 v95; // [xsp+20h] [xbp-60h]

  _ReadStatusReg(TPIDR_EL0);
  v6 = a1[1];
  if ( v6 != a1[2] )
  {
    v8 = *(char **)(v6 - 32);
    v7 = *(char **)(v6 - 24);
    v9 = *(_DWORD *)(v6 - 40);
    *(_QWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0;
    *(_QWORD *)(v6 + 8) = 0;
    v10 = v7 - v8;
    v11 = (v7 - v8) >> 3;
    *(_DWORD *)v6 = v9;
    if ( v7 != v8 )
    {
      if ( v11 >> 61 )
        goto LABEL_72;
      v10 = operator new(v10);
      v8 = *(char **)(v6 - 32);
      v7 = *(char **)(v6 - 24);
    }
    *(_QWORD *)(v6 + 8) = v10;
    *(_QWORD *)(v6 + 16) = v10;
    *(_QWORD *)(v6 + 24) = v10 + 8 * v11;
    if ( v7 == v8 )
      goto LABEL_9;
    v12 = v7 - v8 - 8;
    v13 = (v12 >> 3) + 1;
    v14 = (_QWORD *)v10;
    if ( v13 >= 8 )
    {
      v41 = (v12 & 0xFFFFFFFFFFFFFFF8LL) + 8;
      v42 = v10 + v41;
      v43 = v10 + 4 < (unsigned __int64)&v8[v41];
      if ( v10 < (unsigned __int64)&v8[(v12 & 0xFFFFFFFFFFFFFFF8LL) + 4]
        && (unsigned __int64)v8 < v10 + (v12 & 0xFFFFFFFFFFFFFFF8LL) + 4 )
      {
        v14 = (_QWORD *)v10;
      }
      else
      {
        v44 = v43 && (unsigned __int64)(v8 + 4) < v42;
        v14 = (_QWORD *)v10;
        if ( !v44 )
        {
          v45 = 8 * (v13 & 0x3FFFFFFFFFFFFFF8LL);
          v46 = (_OWORD *)(v10 + 32);
          v14 = (_QWORD *)(v10 + v45);
          v47 = &v8[v45];
          v48 = (__int128 *)(v8 + 32);
          v49 = v13 & 0x3FFFFFFFFFFFFFF8LL;
          do
          {
            v50 = *(v48 - 2);
            v51 = *(v48 - 1);
            v52 = *v48;
            v53 = v48[1];
            v48 += 4;
            v49 -= 8;
            *(v46 - 2) = v50;
            *(v46 - 1) = v51;
            *v46 = v52;
            v46[1] = v53;
            v46 += 4;
          }
          while ( v49 );
          v8 = v47;
          if ( v13 == (v13 & 0x3FFFFFFFFFFFFFF8LL) )
            goto LABEL_8;
        }
      }
    }
    do
    {
      v15 = *(_QWORD *)v8;
      v8 += 8;
      *v14++ = v15;
    }
    while ( v7 != v8 );
LABEL_8:
    v10 += (v12 & 0xFFFFFFFFFFFFFFF8LL) + 8;
LABEL_9:
    v16 = *(_WORD *)(v6 - 8);
    *(_QWORD *)(v6 + 16) = v10;
    *(_WORD *)(v6 + 32) = v16;
    a1[1] += 40;
    v17 = *a3;
    v93 = *a3;
    v19 = (char *)*((_QWORD *)a3 + 1);
    v18 = (char *)*((_QWORD *)a3 + 2);
    v20 = v18 - v19;
    if ( v18 == v19 )
      goto LABEL_12;
    if ( !((unsigned __int64)((v18 - v19) >> 3) >> 61) )
    {
      v20 = operator new(v20);
      v19 = (char *)*((_QWORD *)a3 + 1);
      v18 = (char *)*((_QWORD *)a3 + 2);
LABEL_12:
      p = (void *)v20;
      if ( v18 != v19 )
      {
        v21 = ((unsigned __int64)(v18 - 8 - v19) >> 3) + 1;
        v22 = (_QWORD *)v20;
        if ( v21 >= 8 )
        {
          v54 = (v18 - v19 - 8) & 0xFFFFFFFFFFFFFFF8LL;
          v55 = v20 + v54;
          v56 = (unsigned __int64)&v19[v54 + 4];
          v54 += 8LL;
          v57 = v20 + v54;
          v58 = v20 + 4 < (unsigned __int64)&v19[v54];
          if ( v20 < v56 && (unsigned __int64)v19 < v55 + 4 )
          {
            v22 = (_QWORD *)v20;
          }
          else
          {
            v59 = v58 && (unsigned __int64)(v19 + 4) < v57;
            v22 = (_QWORD *)v20;
            if ( !v59 )
            {
              v60 = 8 * (v21 & 0x3FFFFFFFFFFFFFF8LL);
              v61 = (_OWORD *)(v20 + 32);
              v22 = (_QWORD *)(v20 + v60);
              v62 = &v19[v60];
              v63 = (__int128 *)(v19 + 32);
              v64 = v21 & 0x3FFFFFFFFFFFFFF8LL;
              do
              {
                v65 = *(v63 - 2);
                v66 = *(v63 - 1);
                v67 = *v63;
                v68 = v63[1];
                v63 += 4;
                v64 -= 8;
                *(v61 - 2) = v65;
                *(v61 - 1) = v66;
                *v61 = v67;
                v61[1] = v68;
                v61 += 4;
              }
              while ( v64 );
              v19 = v62;
              if ( v21 == (v21 & 0x3FFFFFFFFFFFFFF8LL) )
                goto LABEL_15;
            }
          }
        }
        do
        {
          v23 = *(_QWORD *)v19;
          v19 += 8;
          *v22++ = v23;
        }
        while ( v18 != v19 );
      }
LABEL_15:
      v95 = *((_WORD *)a3 + 16);
      v24 = a1[1];
      v25 = v24 - 80 - a2;
      if ( v25 >= 1 )
      {
        v26 = v25 / 0x28uLL + 1;
        v27 = (_WORD *)(v24 - 48);
        do
        {
          *((_DWORD *)v27 - 8) = *((_DWORD *)v27 - 18);
          std::vector<Caver::Vector2>::operator=();
          --v26;
          *v27 = *(v27 - 20);
          v27 -= 20;
        }
        while ( v26 > 1 );
        v17 = v93;
      }
      *(_DWORD *)a2 = v17;
      std::vector<Caver::Vector2>::operator=();
      *(_WORD *)(a2 + 32) = v95;
      if ( p )
        operator delete(p);
      return;
    }
LABEL_72:
    sub_565294();
  }
  if ( v6 == *a1 )
    v28 = 1;
  else
    v28 = 0xCCCCCCCCCCCCCCCDLL * ((v6 - *a1) >> 3);
  v29 = v28 - 0x3333333333333333LL * ((v6 - *a1) >> 3);
  v30 = __CFADD__(v28, 0xCCCCCCCCCCCCCCCDLL * ((v6 - *a1) >> 3));
  if ( v30 || v29 > 0x666666666666666LL )
    v31 = 0x666666666666666LL;
  else
    v31 = v29;
  if ( v31 > 0x666666666666666LL )
    goto LABEL_72;
  v32 = 0xCCCCCCCCCCCCCCCDLL * ((a2 - *a1) >> 3);
  v33 = operator new(40 * v31);
  v34 = v33 + 40 * v32;
  *(_DWORD *)v34 = *a3;
  v36 = (char *)*((_QWORD *)a3 + 1);
  v35 = (char *)*((_QWORD *)a3 + 2);
  *(_QWORD *)(v34 + 8) = 0;
  v37 = (unsigned __int64 *)(v34 + 8);
  v37[1] = 0;
  v37[2] = 0;
  v38 = v35 - v36;
  v39 = (v35 - v36) >> 3;
  if ( v35 == v36 )
  {
    v40 = 0;
  }
  else
  {
    if ( v39 >> 61 )
      sub_565294();
    v38 = operator new(v38);
    v36 = (char *)*((_QWORD *)a3 + 1);
    v35 = (char *)*((_QWORD *)a3 + 2);
    v40 = v38;
  }
  v69 = v33 + 40 * v32;
  *v37 = v40;
  *(_QWORD *)(v69 + 16) = v38;
  v70 = (unsigned __int64 *)(v69 + 16);
  v70[1] = v40 + 8 * v39;
  if ( v35 != v36 )
  {
    v71 = v35 - v36 - 8;
    v72 = (v71 >> 3) + 1;
    v73 = (_QWORD *)v40;
    if ( v72 >= 8 )
    {
      v79 = (v71 & 0xFFFFFFFFFFFFFFF8LL) + 8;
      v80 = v38 >= (unsigned __int64)&v36[(v71 & 0xFFFFFFFFFFFFFFF8LL) + 4];
      v81 = (unsigned __int64)&v36[v79];
      v82 = v40 + v79;
      v83 = !v80;
      if ( ((unsigned __int8)v83 & ((unsigned __int64)v36 < v40 + (v71 & 0xFFFFFFFFFFFFFFF8LL) + 4)) != 0 )
      {
        v73 = (_QWORD *)v40;
      }
      else
      {
        v73 = (_QWORD *)v40;
        if ( v40 + 4 >= v81 || (unsigned __int64)(v36 + 4) >= v82 )
        {
          v84 = 8 * (v72 & 0x3FFFFFFFFFFFFFF8LL);
          v85 = (_OWORD *)(v40 + 32);
          v73 = (_QWORD *)(v40 + v84);
          v86 = &v36[v84];
          v87 = (__int128 *)(v36 + 32);
          v88 = v72 & 0x3FFFFFFFFFFFFFF8LL;
          do
          {
            v89 = *(v87 - 2);
            v90 = *(v87 - 1);
            v91 = *v87;
            v92 = v87[1];
            v87 += 4;
            v88 -= 8;
            *(v85 - 2) = v89;
            *(v85 - 1) = v90;
            *v85 = v91;
            v85[1] = v92;
            v85 += 4;
          }
          while ( v88 );
          v36 = v86;
          if ( v72 == (v72 & 0x3FFFFFFFFFFFFFF8LL) )
            goto LABEL_50;
        }
      }
    }
    do
    {
      v74 = *(_QWORD *)v36;
      v36 += 8;
      *v73++ = v74;
    }
    while ( v35 != v36 );
LABEL_50:
    v40 += (v71 & 0xFFFFFFFFFFFFFFF8LL) + 8;
  }
  *v70 = v40;
  *(_WORD *)(v33 + 40 * v32 + 32) = *((_WORD *)a3 + 16);
  std::__uninitialized_copy<false>::__uninit_copy<Caver::Polygon *,Caver::Polygon *>();
  v75 = std::__uninitialized_copy<false>::__uninit_copy<Caver::Polygon *,Caver::Polygon *>();
  v76 = (_QWORD *)*a1;
  v77 = (_QWORD *)a1[1];
  if ( (_QWORD *)*a1 != v77 )
  {
    do
    {
      v78 = (void *)v76[1];
      if ( v78 )
        operator delete(v78);
      v76 += 5;
    }
    while ( v77 != v76 );
    v76 = (_QWORD *)*a1;
  }
  if ( v76 )
    operator delete(v76);
  *a1 = v33;
  a1[1] = v75;
  a1[2] = v33 + 40 * v31;
}

