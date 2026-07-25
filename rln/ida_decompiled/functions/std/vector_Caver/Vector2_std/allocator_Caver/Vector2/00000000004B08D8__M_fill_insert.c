/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B08D8
 * Mangled: _ZNSt6vectorIN5Caver7Vector2ESaIS1_EE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS1_S3_EEmRKS1_
 * Demangled: std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Caver::Vector2*,std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>>,ulong,Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001F7DF0  std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Caver::Vector2*,std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>>,ulong,Caver::Vector2 const&)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000565294  sub_565294
 *   0x000000000056554C  sub_56554C
 *
 * Referenced strings: 193
 *   insn=0x00000000004B0904 string=0x00000000004B0908 ""
 *   insn=0x00000000004B0908 string=0x00000000004B090C ""
 *   insn=0x00000000004B0910 string=0x00000000004B0914 """
 *   insn=0x00000000004B0918 string=0x00000000004B091C "H"
 *   insn=0x00000000004B091C string=0x00000000004B0920 "\t"
 *   insn=0x00000000004B0924 string=0x00000000004B0928 "\n"
 *   insn=0x00000000004B0928 string=0x00000000004B092C "_"
 *   insn=0x00000000004B092C string=0x00000000004B0930 "c?"
 *   insn=0x00000000004B0930 string=0x00000000004B0934 "?"
 *   insn=0x00000000004B0938 string=0x00000000004B093C "I"
 *   insn=0x00000000004B093C string=0x00000000004B0940 "+"
 *   insn=0x00000000004B094C string=0x00000000004B0950 "J"
 *   insn=0x00000000004B0950 string=0x00000000004B0954 "_"
 *   insn=0x00000000004B095C string=0x00000000004B0960 ""
 *   insn=0x00000000004B0960 string=0x00000000004B0964 "(>"
 *   insn=0x00000000004B0964 string=0x00000000004B1128 "["
 *   insn=0x00000000004B096C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004B0970 string=0x00000000004B0974 "O"
 *   insn=0x00000000004B0974 string=0x00000000004B0AB0 "h"
 *   insn=0x00000000004B0978 string=0x00000000004B097C "K"
 *   insn=0x00000000004B097C string=0x00000000004B0980 "k"
 *   insn=0x00000000004B0984 string=0x00000000004B0988 "I"
 *   insn=0x00000000004B098C string=0x00000000004B0990 "q!"
 *   insn=0x00000000004B0990 string=0x00000000004B0994 "0"
 *   insn=0x00000000004B0994 string=0x00000000004B0998 "L"
 *   insn=0x00000000004B0998 string=0x00000000004B099C ""
 *   insn=0x00000000004B09AC string=0x00000000004B09B0 "C+"
 *   insn=0x00000000004B09B0 string=0x00000000004B09B4 "N"
 *   insn=0x00000000004B09B4 string=0x00000000004B09B8 "O"
 *   insn=0x00000000004B09B8 string=0x00000000004B09BC "?"
 *   insn=0x00000000004B09C4 string=0x00000000004B09C8 "?"
 *   insn=0x00000000004B09E0 string=0x00000000004B09E4 "O"
 *   insn=0x00000000004B09E4 string=0x00000000004B09E8 "N"
 *   insn=0x00000000004B09F8 string=0x00000000004B09FC "_"
 *   insn=0x00000000004B09FC string=0x00000000004B0A00 "Q"
 *   insn=0x00000000004B0A00 string=0x00000000004B0A04 "R"
 *   insn=0x00000000004B0A04 string=0x00000000004B0A08 "@"
 *   insn=0x00000000004B0A10 string=0x00000000004B0A14 "R"
 *   insn=0x00000000004B0A14 string=0x00000000004B0A18 "P"
 *   insn=0x00000000004B0A1C string=0x00000000004B0A20 "?"
 *   insn=0x00000000004B0A28 string=0x00000000004B0A2C "_"
 *   insn=0x00000000004B0A44 string=0x00000000004B0A48 "p"
 *   insn=0x00000000004B0A4C string=0x00000000004B0A50 "N"
 *   insn=0x00000000004B0A60 string=0x00000000004B0A64 "!"
 *   insn=0x00000000004B0A64 string=0x00000000004B0A68 " "
 *   insn=0x00000000004B0A68 string=0x00000000004B0A6C """
 *   insn=0x00000000004B0A6C string=0x00000000004B0A70 "R""
 *   insn=0x00000000004B0A7C string=0x00000000004B0A80 "!"
 *   insn=0x00000000004B0A88 string=0x00000000004B0A8C "'"
 *   insn=0x00000000004B0A94 string=0x00000000004B0DB4 "L"
 *   insn=0x00000000004B0AB0 string=0x00000000004B0AB4 "\n"
 *   insn=0x00000000004B0ABC string=0x00000000004B0AC0 """
 *   insn=0x00000000004B0AC0 string=0x00000000004B0B84 "I"
 *   insn=0x00000000004B0AC8 string=0x00000000004B0ACC ")"
 *   insn=0x00000000004B0ACC string=0x00000000004B0AD0 "\n"
 *   insn=0x00000000004B0AE4 string=0x00000000004B0AE8 "h""
 *   insn=0x00000000004B0AE8 string=0x00000000004B0AEC ""
 *   insn=0x00000000004B0AEC string=0x00000000004B0AF0 "\t"
 *   insn=0x00000000004B0AF0 string=0x00000000004B0AF4 ")"
 *   insn=0x00000000004B0AF4 string=0x00000000004B0AF8 "?!"
 *   insn=0x00000000004B0B04 string=0x00000000004B0B08 "i"
 *   insn=0x00000000004B0B04 string=0x00000000004B0C1C "\n"
 *   insn=0x00000000004B0B0C string=0x00000000004B0B10 "I"
 *   insn=0x00000000004B0B14 string=0x00000000004B0B18 ""
 *   insn=0x00000000004B0B28 string=0x00000000004B0B2C ""
 *   insn=0x00000000004B0B30 string=0x00000000004B0B34 "\t!"
 *   insn=0x00000000004B0B30 string=0x00000000004B0B6C "@"
 *   insn=0x00000000004B0B34 string=0x00000000004B0B38 ")"
 *   insn=0x00000000004B0B38 string=0x00000000004B0B3C "*"
 *   insn=0x00000000004B0B3C string=0x00000000004B0B40 "J"
 *   insn=0x00000000004B0B40 string=0x00000000004B0B44 "_!"
 *   insn=0x00000000004B0B48 string=0x00000000004B0CC4 "k!"
 *   insn=0x00000000004B0B4C string=0x00000000004B0B50 "j"
 *   insn=0x00000000004B0B54 string=0x00000000004B0B58 "j"
 *   insn=0x00000000004B0B5C string=0x00000000004B0B60 "("
 *   insn=0x00000000004B0B70 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004B0B94 string=0x00000000004B0B98 ""
 *   insn=0x00000000004B0BA0 string=0x00000000004B0BA4 "?"
 *   insn=0x00000000004B0BC0 string=0x00000000004B0BC4 ","
 *   insn=0x00000000004B0BC4 string=0x00000000004B0BC8 "+"
 *   insn=0x00000000004B0BD4 string=0x00000000004B0BD8 " "
 *   insn=0x00000000004B0BE0 string=0x00000000004B0BE4 ""
 *   insn=0x00000000004B0BE4 string=0x00000000004B0BE8 "!"
 *   insn=0x00000000004B0BEC string=0x00000000004B0BF0 "J"
 *   insn=0x00000000004B0BF4 string=0x00000000004B0BF8 "M"
 *   insn=0x00000000004B0C00 string=0x00000000004B0C04 "@"
 *   insn=0x00000000004B0C04 string=0x00000000004B0C08 "J"
 *   insn=0x00000000004B0C08 string=0x00000000004B0C0C "a"
 *   insn=0x00000000004B0C1C string=0x00000000004B0C20 ""
 *   insn=0x00000000004B0C28 string=0x00000000004B0C2C "J!"
 *   insn=0x00000000004B0C4C string=0x00000000004B0C50 ""
 *   insn=0x00000000004B0C7C string=0x00000000004B0C80 "L"
 *   insn=0x00000000004B0C80 string=0x00000000004B0C84 ","
 *   insn=0x00000000004B0C90 string=0x00000000004B0C94 ""
 *   insn=0x00000000004B0CB0 string=0x00000000004B0CB4 "a"
 *   insn=0x00000000004B0CB4 string=0x00000000004B0CB8 "?"
 *   insn=0x00000000004B0CB8 string=0x00000000004B0CBC "a"
 *   insn=0x00000000004B0CC4 string=0x00000000004B0CC8 "k"
 *   insn=0x00000000004B0CC8 string=0x00000000004B0CCC "o"
 *   insn=0x00000000004B0CCC string=0x00000000004B0CD0 "k"
 *   insn=0x00000000004B0CD4 string=0x00000000004B0CD8 "p"
 *   insn=0x00000000004B0CE8 string=0x00000000004B0CEC "k!"
 *   insn=0x00000000004B0CF4 string=0x00000000004B0CF8 "n"
 *   insn=0x00000000004B0D18 string=0x00000000004B0D1C "m"
 *   insn=0x00000000004B0D20 string=0x00000000004B0D24 "m"
 *   insn=0x00000000004B0D24 string=0x00000000004B0D28 "M"
 *   insn=0x00000000004B0D30 string=0x00000000004B0D34 "n"
 *   insn=0x00000000004B0D38 string=0x00000000004B0D3C "s"
 *   insn=0x00000000004B0D58 string=0x00000000004B0D5C "a"
 *   insn=0x00000000004B0D5C string=0x00000000004B0D60 "_"
 *   insn=0x00000000004B0D60 string=0x00000000004B0D64 "a"
 *   insn=0x00000000004B0D64 string=0x00000000004B0D68 "~"
 *   insn=0x00000000004B0D70 string=0x00000000004B0D74 "L"
 *   insn=0x00000000004B0D78 string=0x00000000004B0D7C "!"
 *   insn=0x00000000004B0D7C string=0x00000000004B0D80 "P"
 *   insn=0x00000000004B0D88 string=0x00000000004B0D8C "1""
 *   insn=0x00000000004B0D8C string=0x00000000004B0D90 "@"
 *   insn=0x00000000004B0D98 string=0x00000000004B0D9C "a"
 *   insn=0x00000000004B0DB4 string=0x00000000004B0DB8 "M"
 *   insn=0x00000000004B0DBC string=0x00000000004B0DC0 "`"
 *   insn=0x00000000004B0DC0 string=0x00000000004B0E4C "h"
 *   insn=0x00000000004B0DD0 string=0x00000000004B0DD4 """
 *   insn=0x00000000004B0DDC string=0x00000000004B0DE0 "_"
 *   insn=0x00000000004B0DE8 string=0x00000000004B0DEC "K"
 *   insn=0x00000000004B0E00 string=0x00000000004B0E3C "h%"
 *   insn=0x00000000004B0E08 string=0x00000000004B0E0C "k"
 *   insn=0x00000000004B0E0C string=0x00000000004B0E10 "!"
 *   insn=0x00000000004B0E10 string=0x00000000004B0E14 "n"
 *   insn=0x00000000004B0E2C string=0x00000000004B0E30 "a"
 *   insn=0x00000000004B0E34 string=0x00000000004B0E38 " "
 *   insn=0x00000000004B0E44 string=0x00000000004B0E48 "]"
 *   insn=0x00000000004B0E50 string=0x00000000004B0E54 "Z"
 *   insn=0x00000000004B0E58 string=0x00000000004B0E5C "q"
 *   insn=0x00000000004B0E60 string=0x00000000004B0E64 "!"
 *   insn=0x00000000004B0E64 string=0x00000000004B0E68 "@"
 *   insn=0x00000000004B0E68 string=0x00000000004B0E6C "N"
 *   insn=0x00000000004B0E7C string=0x00000000004B0E80 "1""
 *   insn=0x00000000004B0E8C string=0x00000000004B0E90 "r"
 *   insn=0x00000000004B0E90 string=0x00000000004B0E94 "P"
 *   insn=0x00000000004B0EA0 string=0x00000000004B0EA4 "_"
 *   insn=0x00000000004B0EA4 string=0x00000000004B0EA8 "1"
 *   insn=0x00000000004B0EAC string=0x00000000004B0EB0 "1"
 *   insn=0x00000000004B0ECC string=0x00000000004B0ED0 "q"
 *   insn=0x00000000004B0ED4 string=0x00000000004B0ED8 "n"
 *   insn=0x00000000004B0ED8 string=0x00000000004B0EDC "K"
 *   insn=0x00000000004B0EE0 string=0x00000000004B0EE4 " "
 *   insn=0x00000000004B0EE4 string=0x00000000004B0EE8 """
 *   insn=0x00000000004B0EE8 string=0x00000000004B0EEC "R""
 *   insn=0x00000000004B0EEC string=0x00000000004B0EF0 "`"
 *   insn=0x00000000004B0EF0 string=0x00000000004B0EF4 "b"
 *   insn=0x00000000004B0EF4 string=0x00000000004B0EF8 "a"
 *   insn=0x00000000004B0F18 string=0x00000000004B0F1C "_"
 *   insn=0x00000000004B0F28 string=0x00000000004B0F2C "N"
 *   insn=0x00000000004B0F48 string=0x00000000004B0F4C "J!"
 *   insn=0x00000000004B0F5C string=0x00000000004B0F60 "N"
 *   insn=0x00000000004B0F70 string=0x00000000004B0F74 "l"
 *   insn=0x00000000004B0F70 string=0x00000000004B0FAC "k"
 *   insn=0x00000000004B0F78 string=0x00000000004B0F7C "j"
 *   insn=0x00000000004B0F7C string=0x00000000004B0F80 "!"
 *   insn=0x00000000004B0F80 string=0x00000000004B0F84 "m"
 *   insn=0x00000000004B0F9C string=0x00000000004B0FA0 "a"
 *   insn=0x00000000004B0FAC string=0x00000000004B0FB0 "H%"
 *   insn=0x00000000004B0FB0 string=0x00000000004B0FB4 "_"
 *   insn=0x00000000004B0FD8 string=0x00000000004B0FDC "@!"
 *   insn=0x00000000004B0FF8 string=0x00000000004B0FFC "q"
 *   insn=0x00000000004B1000 string=0x00000000004B1004 "P"
 *   insn=0x00000000004B1014 string=0x00000000004B1018 "P"
 *   insn=0x00000000004B1020 string=0x00000000004B1024 "("
 *   insn=0x00000000004B1028 string=0x00000000004B102C "@"
 *   insn=0x00000000004B1034 string=0x00000000004B1038 "_"
 *   insn=0x00000000004B1038 string=0x00000000004B103C "h"
 *   insn=0x00000000004B103C string=0x00000000004B1040 "Q"
 *   insn=0x00000000004B1048 string=0x00000000004B104C "2"
 *   insn=0x00000000004B104C string=0x00000000004B1050 "@"
 *   insn=0x00000000004B1050 string=0x00000000004B1054 "R"
 *   insn=0x00000000004B1054 string=0x00000000004B1058 "M"
 *   insn=0x00000000004B1058 string=0x00000000004B105C "!"
 *   insn=0x00000000004B105C string=0x00000000004B1060 "R"
 *   insn=0x00000000004B1068 string=0x00000000004B106C "A"
 *   insn=0x00000000004B106C string=0x00000000004B1070 "1"
 *   insn=0x00000000004B1070 string=0x00000000004B1074 "@"
 *   insn=0x00000000004B1078 string=0x00000000004B107C "Q"
 *   insn=0x00000000004B107C string=0x00000000004B1080 "?"
 *   insn=0x00000000004B1084 string=0x00000000004B1088 "R"
 *   insn=0x00000000004B1090 string=0x00000000004B1094 "R"
 *   insn=0x00000000004B10A4 string=0x00000000004B10A8 "_"
 *   insn=0x00000000004B10CC string=0x00000000004B10D0 "J"
 *   insn=0x00000000004B10DC string=0x00000000004B10E0 " "
 *   insn=0x00000000004B10E0 string=0x00000000004B10E4 """
 *   insn=0x00000000004B1100 string=0x00000000004B1104 "-"
 *   insn=0x00000000004B1114 string=0x00000000004B1118 "1"
 *   insn=0x00000000004B111C string=0x00000000004B1124 "\n"
 *   insn=0x00000000004B111C string=0x000000000059299C "vector::_M_fill_insert"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall std::vector<Caver::Vector2>::_M_fill_insert(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  char *v6; // x19
  unsigned __int64 v8; // x10
  char *v9; // x25
  unsigned __int64 v10; // x9
  __int64 v11; // x10
  bool v12; // cf
  unsigned __int64 v13; // x9
  int v14; // w10
  unsigned __int64 v15; // x24
  unsigned __int64 v16; // x22
  unsigned int v17; // w8
  unsigned int v18; // w9
  unsigned __int64 v19; // x11
  unsigned __int64 v20; // x17
  unsigned __int64 v21; // x16
  unsigned __int64 v22; // x12
  unsigned __int64 v23; // x11
  _QWORD *v24; // x14
  __int64 *v25; // x15
  bool v26; // w15
  bool v27; // w18
  unsigned __int64 v28; // x15
  unsigned __int64 v29; // x16
  unsigned __int64 v30; // x0
  unsigned __int64 v31; // x16
  __int64 v32; // x15
  __int64 v33; // x17
  __int64 v34; // x18
  _OWORD *v35; // x0
  __int128 v36; // q1
  __int128 v37; // q2
  __int128 v38; // q3
  unsigned __int64 v39; // x14
  unsigned int *v40; // x12
  unsigned __int64 v41; // x13
  __int64 v42; // x10
  _QWORD *v43; // x8
  unsigned __int64 v44; // x9
  char *v45; // x0
  unsigned __int64 v46; // x12
  unsigned __int64 v47; // x8
  unsigned __int64 v48; // x9
  _QWORD *v49; // x10
  char *v50; // x11
  __int64 v51; // t1
  char *v52; // x8
  unsigned __int64 v53; // x23
  unsigned __int64 v54; // x9
  unsigned __int64 v55; // x10
  _QWORD *v56; // x11
  __int64 v57; // t1
  unsigned __int64 v58; // x15
  const float *v59; // x9
  float32x4_t v60; // q0 OVERLAPPED
  float32x4_t v61; // q1
  float *v62; // x10
  unsigned __int64 v63; // x12
  float *v64; // x13
  unsigned __int64 v65; // x10
  unsigned __int64 v66; // x10
  _BOOL4 v67; // w12
  _BOOL4 v68; // w13
  __int64 v69; // x11
  _OWORD *v70; // x13
  __int128 *v71; // x14
  __int64 v72; // x15
  __int128 v73; // q0
  __int128 v74; // q1
  __int128 v75; // q2
  __int128 v76; // q3
  unsigned __int64 v77; // x11
  unsigned __int64 v78; // x15
  char *v79; // x11
  unsigned __int64 v80; // x15
  unsigned __int64 v81; // x11
  char v82; // w16
  bool v83; // w11
  bool v84; // w13
  __int64 v85; // x15
  __int128 *v86; // x14
  _OWORD *v87; // x12
  __int64 v88; // x15
  __int128 v89; // q0
  __int128 v90; // q1
  __int128 v91; // q2
  __int128 v92; // q3
  int32x4_t v93; // q0 OVERLAPPED
  int32x4_t v94; // q1
  float *v95; // x16
  unsigned __int64 v96; // x17
  float *v97; // x18
  _QWORD *v98; // x12
  unsigned __int64 v99; // x13
  unsigned __int64 v100; // x15
  char *v101; // x14
  __int64 v102; // t1
  unsigned __int64 v103; // x12
  unsigned int *v104; // x11
  int32x4_t v105; // q0 OVERLAPPED
  int32x4_t v106; // q1
  float *v107; // x14
  __int64 v108; // x15
  float *v109; // x16
  __int64 v110; // x17
  unsigned __int64 v111; // x14
  unsigned __int64 v112; // x17
  char v113; // w1
  bool v114; // w14
  bool v115; // w16
  __int64 v116; // x18
  __int128 *v117; // x17
  _OWORD *v118; // x11
  __int64 v119; // x18
  __int128 v120; // q0
  __int128 v121; // q1
  __int128 v122; // q2
  __int128 v123; // q3
  __int64 v124; // t1
  unsigned __int64 v125; // x15
  unsigned __int64 v126; // x14
  __int64 v127; // x13
  _QWORD *v128; // x10
  __int64 *v129; // x12
  __int64 v130; // t1
  unsigned int *v131; // x10
  int32x4_t v132; // q0 OVERLAPPED
  int32x4_t v133; // q1
  float *v134; // x13
  __int64 v135; // x14
  float *v136; // x15
  __int64 v137; // x18
  bool v138; // w17
  __int64 v139; // x13
  unsigned __int64 v140; // x15
  __int64 v141; // x14
  unsigned __int64 v142; // x16
  __int64 v143; // x14
  __int128 v144; // q1
  __int128 v145; // q2
  __int128 v146; // q3

  v6 = (char *)a2;
  if ( !a3 )
    return;
  v8 = a1[1];
  if ( (__int64)(a1[2] - v8) >> 3 < a3 )
  {
    v9 = (char *)*a1;
    v10 = (__int64)(v8 - *a1) >> 3;
    if ( 0x1FFFFFFFFFFFFFFFLL - v10 < a3 )
      sub_56554C("vector::_M_fill_insert");
    if ( v10 >= a3 )
      v11 = (__int64)(v8 - *a1) >> 3;
    else
      v11 = a3;
    v12 = __CFADD__(v11, v10);
    v13 = v11 + v10;
    v14 = v12;
    if ( v14 | (v13 >> 61 != 0) )
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v15 = v13;
    if ( v15 )
    {
      if ( v15 >> 61 )
        sub_565294(a1, a2, a3);
      v16 = operator new(8 * v15);
    }
    else
    {
      v16 = 0;
    }
    v42 = (v6 - v9) >> 3;
    v43 = (_QWORD *)(v16 + 8 * v42);
    if ( a3 >= 8 )
    {
      v58 = v16 + 8 * (v42 + a3);
      if ( a4 + 1 > (unsigned __int64)v43 && v58 - 4 > a4 )
      {
        v44 = a3;
      }
      else
      {
        v44 = a3;
        if ( a4 + 5 <= (unsigned __int64)v43 + 4 || a4 + 4 >= v58 )
        {
          v59 = (const float *)a4;
          v60 = vld1q_dup_f32(v59++);
          v43 += a3 & 0xFFFFFFFFFFFFFFF8LL;
          v61 = vld1q_dup_f32(v59);
          v44 = a3 - (a3 & 0xFFFFFFFFFFFFFFF8LL);
          v62 = (float *)(v16 + 8 * v42 + 32);
          v63 = a3 & 0xFFFFFFFFFFFFFFF8LL;
          do
          {
            v64 = v62 - 8;
            v63 -= 8LL;
            vst2q_f32(v64, *(float32x4x2_t *)v60.n128_u64);
            vst2q_f32(v62, *(float32x4x2_t *)v60.n128_u64);
            v62 += 16;
          }
          while ( v63 );
          if ( (a3 & 0xFFFFFFFFFFFFFFF8LL) == a3 )
          {
LABEL_39:
            v45 = (char *)*a1;
            v46 = v16;
            if ( (char *)*a1 != v6 )
            {
              v47 = v6 - 8 - v45;
              v48 = (v47 >> 3) + 1;
              v49 = (_QWORD *)v16;
              v50 = (char *)*a1;
              if ( v48 < 8 )
                goto LABEL_132;
              v65 = (v47 & 0xFFFFFFFFFFFFFFF8LL) + 8;
              v12 = v16 + 4 >= (unsigned __int64)&v45[v65];
              v66 = v16 + v65;
              v67 = !v12;
              v68 = (unsigned __int64)(v45 + 4) < v66;
              v49 = (_QWORD *)v16;
              v50 = (char *)*a1;
              if ( v16 < (unsigned __int64)&v45[(v47 & 0xFFFFFFFFFFFFFFF8LL) + 4]
                && (unsigned __int64)v45 < v16 + (v47 & 0xFFFFFFFFFFFFFFF8LL) + 4 )
              {
                goto LABEL_132;
              }
              v49 = (_QWORD *)v16;
              v50 = (char *)*a1;
              if ( v67 && v68 )
                goto LABEL_132;
              v69 = 8 * (v48 & 0x3FFFFFFFFFFFFFF8LL);
              v70 = (_OWORD *)(v16 + 32);
              v49 = (_QWORD *)(v16 + v69);
              v50 = &v45[v69];
              v71 = (__int128 *)(v45 + 32);
              v72 = v48 & 0x3FFFFFFFFFFFFFF8LL;
              do
              {
                v73 = *(v71 - 2);
                v74 = *(v71 - 1);
                v75 = *v71;
                v76 = v71[1];
                v71 += 4;
                v72 -= 8;
                *(v70 - 2) = v73;
                *(v70 - 1) = v74;
                *v70 = v75;
                v70[1] = v76;
                v70 += 4;
              }
              while ( v72 );
              if ( v48 != (v48 & 0x3FFFFFFFFFFFFFF8LL) )
              {
LABEL_132:
                do
                {
                  v51 = *(_QWORD *)v50;
                  v50 += 8;
                  *v49++ = v51;
                }
                while ( v6 != v50 );
              }
              v46 = v16 + (v47 & 0xFFFFFFFFFFFFFFF8LL) + 8;
            }
            v52 = (char *)a1[1];
            v53 = v46 + 8 * a3;
            if ( v52 == v6 )
              goto LABEL_48;
            v54 = v52 - 8 - v6;
            v55 = (v54 >> 3) + 1;
            if ( v55 >= 8 )
            {
              v77 = (unsigned __int64)(v52 - v6 - 8) >> 3;
              v78 = v77 + a3;
              v79 = &v6[8 * v77];
              v80 = v46 + 8 * v78;
              v12 = v53 >= (unsigned __int64)(v79 + 4);
              v81 = (unsigned __int64)(v79 + 8);
              v82 = !v12;
              v83 = v46 + 8 * a3 + 4 < v81;
              if ( ((unsigned __int8)v82 & ((unsigned __int64)v6 < v80 + 4)) != 0 )
              {
                v56 = (_QWORD *)(v46 + 8 * a3);
              }
              else
              {
                v84 = v83 && (unsigned __int64)(v6 + 4) < v80 + 8;
                v56 = (_QWORD *)(v46 + 8 * a3);
                if ( !v84 )
                {
                  v85 = 8 * (v55 & 0x3FFFFFFFFFFFFFF8LL);
                  v86 = (__int128 *)(v6 + 32);
                  v56 = (_QWORD *)(v53 + v85);
                  v6 += v85;
                  v87 = (_OWORD *)(v46 + 8 * a3 + 32);
                  v88 = v55 & 0x3FFFFFFFFFFFFFF8LL;
                  do
                  {
                    v89 = *(v86 - 2);
                    v90 = *(v86 - 1);
                    v91 = *v86;
                    v92 = v86[1];
                    v86 += 4;
                    v88 -= 8;
                    *(v87 - 2) = v89;
                    *(v87 - 1) = v90;
                    *v87 = v91;
                    v87[1] = v92;
                    v87 += 4;
                  }
                  while ( v88 );
                  if ( v55 == (v55 & 0x3FFFFFFFFFFFFFF8LL) )
                    goto LABEL_47;
                }
              }
            }
            else
            {
              v56 = (_QWORD *)(v46 + 8 * a3);
            }
            do
            {
              v57 = *(_QWORD *)v6;
              v6 += 8;
              *v56++ = v57;
            }
            while ( v52 != v6 );
LABEL_47:
            v53 += (v54 & 0xFFFFFFFFFFFFFFF8LL) + 8;
LABEL_48:
            if ( v45 )
              operator delete(v45);
            *a1 = v16;
            a1[1] = v53;
            a1[2] = v16 + 8 * v15;
            return;
          }
        }
      }
    }
    else
    {
      v44 = a3;
    }
    do
    {
      --v44;
      *v43++ = *(_QWORD *)a4;
    }
    while ( v44 );
    goto LABEL_39;
  }
  v17 = *(_DWORD *)a4;
  v18 = *(_DWORD *)(a4 + 4);
  v19 = (__int64)(v8 - a2) >> 3;
  if ( v19 > a3 )
  {
    v20 = 8 * a3 - 8;
    v21 = v20 >> 3;
    v22 = v8 - 8 * a3;
    v23 = (v20 >> 3) + 1;
    v24 = (_QWORD *)a1[1];
    v25 = (__int64 *)v22;
    if ( v23 < 8 )
      goto LABEL_101;
    v26 = __CFADD__(v20, v8 + 4);
    v27 = __CFADD__(v20, v8 - 8 * a3 + 4);
    if ( !v26 )
    {
      v24 = (_QWORD *)a1[1];
      v25 = (__int64 *)(v8 - 8 * a3);
      if ( v27 )
        goto LABEL_101;
      v28 = v8 + 8 * (v21 - a3);
      v29 = v21 + 1;
      v30 = v8 + 8 * (v29 - a3);
      v31 = v8 + 8 * v29;
      if ( v8 >= v28 + 4 || v22 >= v8 + v20 + 4 )
      {
        v24 = (_QWORD *)a1[1];
        v25 = (__int64 *)(v8 - 8 * a3);
        if ( v8 + 4 >= v30 || (unsigned __int64)v25 + 4 >= v31 )
        {
          v32 = 8 * (v23 & 0x3FFFFFFFFFFFFFF8LL);
          v24 = (_QWORD *)(v8 + v32);
          v25 = (__int64 *)(v22 + v32);
          v33 = -8LL * a3;
          v34 = v23 & 0x3FFFFFFFFFFFFFF8LL;
          v35 = (_OWORD *)a1[1];
          do
          {
            v36 = *(_OWORD *)((char *)v35 + v33 + 16);
            v37 = *(_OWORD *)((char *)v35 + v33 + 32);
            v38 = *(_OWORD *)((char *)v35 + v33 + 48);
            v34 -= 8;
            *v35 = *(_OWORD *)((char *)v35 + v33);
            v35[1] = v36;
            v35[2] = v37;
            v35[3] = v38;
            v35 += 4;
          }
          while ( v34 );
          if ( v23 == (v23 & 0x3FFFFFFFFFFFFFF8LL) )
            goto LABEL_102;
        }
        goto LABEL_101;
      }
    }
    v24 = (_QWORD *)a1[1];
    v25 = (__int64 *)(v8 - 8 * a3);
    do
    {
LABEL_101:
      v124 = *v25++;
      *v24++ = v124;
    }
    while ( (__int64 *)v8 != v25 );
LABEL_102:
    v125 = v22 - a2;
    a1[1] = v8 + 8 * a3;
    if ( (__int64)(v22 - a2) >= 1 )
    {
      v126 = v125 >> 3;
      if ( v125 < 0x40 )
        goto LABEL_104;
      v137 = 8 * (v126 - 1);
      v138 = !is_mul_ok(v126 - 1, 8u);
      if ( v8 - 8 - v137 > v8 - 8 )
        goto LABEL_104;
      if ( v138 )
        goto LABEL_104;
      if ( v8 + 8 * ~a3 - v137 > v8 + 8 * ~a3 )
        goto LABEL_104;
      if ( v138 )
        goto LABEL_104;
      if ( v8 - 4 - v137 > v8 - 4 )
        goto LABEL_104;
      if ( v138 )
        goto LABEL_104;
      if ( v8 - 8 * a3 - 4 - v137 > v8 - 8 * a3 - 4 )
        goto LABEL_104;
      if ( v138 )
        goto LABEL_104;
      if ( v8 - 8 * v126 < v8 - 8 * a3 - 4 && v8 - 4 > v8 - 8 * (a3 + v126) )
        goto LABEL_104;
      if ( v8 + 8 * ~(v126 - 2) - 4 < v22 && v8 + 8 * ~(a3 - 2 + v126) - 4 < v8 )
        goto LABEL_104;
      v139 = (v125 >> 3) & 7;
      v140 = v126 - v139;
      v141 = 8 * (v139 - v126);
      v142 = v8;
      v8 += v141;
      v22 += v141;
      v143 = -8LL * a3;
      do
      {
        v144 = *(_OWORD *)(v143 + v142 - 16);
        v145 = *(_OWORD *)(v143 + v142 - 64);
        v146 = *(_OWORD *)(v143 + v142 - 48);
        v140 -= 8LL;
        *(_OWORD *)(v142 - 32) = *(_OWORD *)(v143 + v142 - 32);
        *(_OWORD *)(v142 - 16) = v144;
        *(_OWORD *)(v142 - 64) = v145;
        *(_OWORD *)(v142 - 48) = v146;
        v142 -= 64LL;
      }
      while ( v140 );
      v126 = v139;
      if ( v139 )
      {
LABEL_104:
        v127 = v126 + 1;
        v128 = (_QWORD *)(v8 - 8);
        v129 = (__int64 *)(v22 - 8);
        do
        {
          v130 = *v129--;
          --v127;
          *v128-- = v130;
        }
        while ( v127 > 1 );
      }
    }
    v131 = (unsigned int *)a2;
    if ( v23 < 8 )
      goto LABEL_133;
    v132 = vdupq_n_s32(v17);
    v131 = (unsigned int *)(a2 + 8 * (v23 & 0x3FFFFFFFFFFFFFF8LL));
    v133 = vdupq_n_s32(v18);
    v134 = (float *)(a2 + 32);
    v135 = v23 & 0x3FFFFFFFFFFFFFF8LL;
    do
    {
      v136 = v134 - 8;
      v135 -= 8;
      vst2q_f32(v136, *(float32x4x2_t *)v132.n128_u64);
      vst2q_f32(v134, *(float32x4x2_t *)v132.n128_u64);
      v134 += 16;
    }
    while ( v135 );
    if ( v23 != (v23 & 0x3FFFFFFFFFFFFFF8LL) )
    {
LABEL_133:
      do
      {
        *v131 = v17;
        v131[1] = v18;
        v131 += 2;
      }
      while ( v131 != (unsigned int *)(a2 + 8 * a3) );
    }
    return;
  }
  v39 = a3 - v19;
  if ( a3 != v19 )
  {
    if ( v39 < 8 )
    {
      v40 = (unsigned int *)a1[1];
      v41 = a3 - v19;
      do
      {
LABEL_78:
        *v40 = v17;
        v40[1] = v18;
        v40 += 2;
        --v41;
      }
      while ( v41 );
      goto LABEL_79;
    }
    v93 = vdupq_n_s32(v17);
    v40 = (unsigned int *)(v8 + 8 * (v39 & 0xFFFFFFFFFFFFFFF8LL));
    v41 = v39 - (v39 & 0xFFFFFFFFFFFFFFF8LL);
    v94 = vdupq_n_s32(v18);
    v95 = (float *)(v8 + 32);
    v96 = v39 & 0xFFFFFFFFFFFFFFF8LL;
    do
    {
      v97 = v95 - 8;
      v96 -= 8LL;
      vst2q_f32(v97, *(float32x4x2_t *)v93.n128_u64);
      vst2q_f32(v95, *(float32x4x2_t *)v93.n128_u64);
      v95 += 16;
    }
    while ( v96 );
    if ( v39 != (v39 & 0xFFFFFFFFFFFFFFF8LL) )
      goto LABEL_78;
  }
LABEL_79:
  v98 = (_QWORD *)(v8 + 8 * v39);
  a1[1] = (unsigned __int64)v98;
  if ( v8 == a2 )
  {
    a1[1] = a2 + 8 * a3;
    return;
  }
  v99 = (v8 - a2 - 8) >> 3;
  v100 = v99 + 1;
  if ( v99 + 1 < 8 )
  {
    v101 = (char *)a2;
    goto LABEL_82;
  }
  v110 = a2 + 8 * v99;
  v12 = (unsigned __int64)v98 >= v110 + 4;
  v111 = v8 + 8 * v39 + 4;
  v112 = v110 + 8;
  v113 = !v12;
  v114 = v111 < v112;
  if ( ((unsigned __int8)v113 & ((unsigned __int64)v6 < v8 + 8 * (v99 + a3 - v19) + 4)) != 0 )
  {
    v101 = v6;
    do
    {
LABEL_82:
      v102 = *(_QWORD *)v101;
      v101 += 8;
      *v98++ = v102;
    }
    while ( (char *)v8 != v101 );
    goto LABEL_83;
  }
  v115 = v114 && (unsigned __int64)(v6 + 4) < v8 + 8 * (v99 + a3 + 1 - v19);
  v101 = v6;
  if ( v115 )
    goto LABEL_82;
  v116 = 8 * (v100 & 0x3FFFFFFFFFFFFFF8LL);
  v117 = (__int128 *)(v6 + 32);
  v98 = (_QWORD *)((char *)v98 + v116);
  v101 = &v6[v116];
  v118 = (_OWORD *)(v8 + 8 * (a3 + 4 - v19));
  v119 = v100 & 0x3FFFFFFFFFFFFFF8LL;
  do
  {
    v120 = *(v117 - 2);
    v121 = *(v117 - 1);
    v122 = *v117;
    v123 = v117[1];
    v117 += 4;
    v119 -= 8;
    *(v118 - 2) = v120;
    *(v118 - 1) = v121;
    *v118 = v122;
    v118[1] = v123;
    v118 += 4;
  }
  while ( v119 );
  if ( v100 != (v100 & 0x3FFFFFFFFFFFFFF8LL) )
    goto LABEL_82;
LABEL_83:
  v103 = v99 + 1;
  a1[1] = v8 + 8 * a3;
  v104 = (unsigned int *)v6;
  if ( v99 + 1 < 8 )
    goto LABEL_134;
  v105 = vdupq_n_s32(v17);
  v104 = (unsigned int *)&v6[8 * (v103 & 0x3FFFFFFFFFFFFFF8LL)];
  v106 = vdupq_n_s32(v18);
  v107 = (float *)(v6 + 32);
  v108 = v103 & 0x3FFFFFFFFFFFFFF8LL;
  do
  {
    v109 = v107 - 8;
    v108 -= 8;
    vst2q_f32(v109, *(float32x4x2_t *)v105.n128_u64);
    vst2q_f32(v107, *(float32x4x2_t *)v105.n128_u64);
    v107 += 16;
  }
  while ( v108 );
  if ( v103 != (v103 & 0x3FFFFFFFFFFFFFF8LL) )
  {
LABEL_134:
    do
    {
      *v104 = v17;
      v104[1] = v18;
      v104 += 2;
    }
    while ( v104 != (unsigned int *)v8 );
  }
}

