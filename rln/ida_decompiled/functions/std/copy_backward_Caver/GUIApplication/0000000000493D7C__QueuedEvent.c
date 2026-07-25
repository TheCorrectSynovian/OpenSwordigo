/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000493D7C
 * Mangled: _ZSt13copy_backwardIN5Caver14GUIApplication11QueuedEventEESt15_Deque_iteratorIT_RS4_PS4_ES3_IS4_RKS4_PS8_ESB_S7_
 * Demangled: std::copy_backward<Caver::GUIApplication::QueuedEvent>(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent const&,Caver::GUIApplication::QueuedEvent const*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent const&,Caver::GUIApplication::QueuedEvent const*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *
 * Callers: 1
 *   0x00000000001F8EE0  std::copy_backward<Caver::GUIApplication::QueuedEvent>(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent const&,Caver::GUIApplication::QueuedEvent const*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent const&,Caver::GUIApplication::QueuedEvent const*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *
 * Callees: 1
 *   0x00000000002033A0  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *
 * Referenced strings: 99
 *   insn=0x0000000000493DAC string=0x0000000000493DB0 "0"
 *   insn=0x0000000000493DB0 string=0x0000000000493DB8 "k"
 *   insn=0x0000000000493DBC string=0x0000000000493DC0 "M"
 *   insn=0x0000000000493DC8 string=0x0000000000493DCC "k"
 *   insn=0x0000000000493DDC string=0x0000000000493DE0 "z"
 *   insn=0x0000000000493DE4 string=0x0000000000493DE8 "_"
 *   insn=0x0000000000493E04 string=0x0000000000493E08 "r"
 *   insn=0x0000000000493E14 string=0x0000000000493E18 "R"
 *   insn=0x0000000000493E18 string=0x0000000000493E1C "L"
 *   insn=0x0000000000493E1C string=0x0000000000493E20 "k"
 *   insn=0x0000000000493E28 string=0x0000000000493E2C "}"
 *   insn=0x0000000000493E30 string=0x0000000000493E34 "+"
 *   insn=0x0000000000493E34 string=0x0000000000493E38 "k"
 *   insn=0x0000000000493E38 string=0x0000000000493E3C "k}"
 *   insn=0x0000000000493E3C string=0x0000000000493E40 ""
 *   insn=0x0000000000493E44 string=0x0000000000493E48 ""
 *   insn=0x0000000000493E50 string=0x0000000000493E54 "+"
 *   insn=0x0000000000493E58 string=0x0000000000493E5C "k"
 *   insn=0x0000000000493E5C string=0x0000000000493E60 "k"
 *   insn=0x0000000000493E60 string=0x0000000000493E64 "s"
 *   insn=0x0000000000493E6C string=0x0000000000493E70 "h"
 *   insn=0x0000000000493E74 string=0x0000000000493E78 ""
 *   insn=0x0000000000493E78 string=0x0000000000493E7C "h"
 *   insn=0x0000000000493E7C string=0x0000000000493E80 ""
 *   insn=0x0000000000493E84 string=0x0000000000493E88 "\n"
 *   insn=0x0000000000493E88 string=0x0000000000493FC8 "H"
 *   insn=0x0000000000493E8C string=0x0000000000493E9C "}"
 *   insn=0x0000000000493E9C string=0x0000000000493EA0 ""
 *   insn=0x0000000000493EB0 string=0x0000000000493EB4 "y"
 *   insn=0x0000000000493EB4 string=0x0000000000493EB8 " "
 *   insn=0x0000000000493EBC string=0x0000000000493EC0 "("
 *   insn=0x0000000000493EC0 string=0x0000000000493EC4 "7"
 *   insn=0x0000000000493ECC string=0x0000000000493ED0 "\n"
 *   insn=0x0000000000493ECC string=0x0000000000493EDC "6"
 *   insn=0x0000000000493ED0 string=0x0000000000493ED4 "J"
 *   insn=0x0000000000493ED4 string=0x0000000000493ED8 "\n"
 *   insn=0x0000000000493EDC string=0x0000000000493EE0 ")#>"
 *   insn=0x0000000000493EE0 string=0x0000000000493EE4 "6"
 *   insn=0x0000000000493EE8 string=0x0000000000493EEC ""
 *   insn=0x0000000000493EFC string=0x0000000000493F00 "\t@"
 *   insn=0x0000000000493F08 string=0x0000000000493F0C ""
 *   insn=0x0000000000493F1C string=0x0000000000493F20 "@"
 *   insn=0x0000000000493F28 string=0x0000000000493F2C ")!"
 *   insn=0x0000000000493F30 string=0x0000000000493F34 "\n"
 *   insn=0x0000000000493F30 string=0x0000000000493F40 "j"
 *   insn=0x0000000000493F34 string=0x0000000000493F38 "J"
 *   insn=0x0000000000493F38 string=0x0000000000493F3C "\n"
 *   insn=0x0000000000493F40 string=0x0000000000493F44 "V"
 *   insn=0x0000000000493F44 string=0x0000000000493F48 "I!?"
 *   insn=0x0000000000493F48 string=0x0000000000493F4C "6"
 *   insn=0x0000000000493F50 string=0x0000000000493F54 ""
 *   insn=0x0000000000493F64 string=0x0000000000493F68 "\t@"
 *   insn=0x0000000000493F70 string=0x0000000000493F74 ""
 *   insn=0x0000000000493F84 string=0x0000000000493F88 "@"
 *   insn=0x0000000000493FA0 string=0x0000000000493FA4 "0"
 *   insn=0x0000000000493FA4 string=0x0000000000493FA8 "r"
 *   insn=0x0000000000493FA8 string=0x0000000000493FAC "p"
 *   insn=0x0000000000493FAC string=0x0000000000493FB0 "2I"
 *   insn=0x0000000000493FC0 string=0x0000000000493FC4 "R"
 *   insn=0x0000000000493FC8 string=0x0000000000493FCC ""
 *   insn=0x0000000000493FD0 string=0x0000000000493FD4 "-"
 *   insn=0x0000000000493FE0 string=0x0000000000493FE4 "L"
 *   insn=0x0000000000493FE4 string=0x0000000000493FE8 "j)"
 *   insn=0x0000000000493FE4 string=0x000000000049400C "\t}"
 *   insn=0x0000000000493FF0 string=0x0000000000493FF4 "*}"
 *   insn=0x0000000000493FF4 string=0x0000000000493FF8 ")"
 *   insn=0x0000000000493FF8 string=0x0000000000493FFC "I"
 *   insn=0x0000000000493FFC string=0x0000000000494000 "\n"
 *   insn=0x0000000000494000 string=0x0000000000494004 "J\tI"
 *   insn=0x000000000049400C string=0x0000000000494010 "\n"
 *   insn=0x0000000000494010 string=0x0000000000494014 ")"
 *   insn=0x0000000000494014 string=0x0000000000494018 "*"
 *   insn=0x000000000049401C string=0x0000000000494020 "L"
 *   insn=0x0000000000494020 string=0x0000000000494024 "J"
 *   insn=0x0000000000494024 string=0x0000000000494028 "H"
 *   insn=0x0000000000494028 string=0x000000000049402C "-"
 *   insn=0x0000000000494030 string=0x0000000000494034 ")il"
 *   insn=0x0000000000494034 string=0x0000000000494038 "*"
 *   insn=0x0000000000494040 string=0x0000000000494044 "\n%"
 *   insn=0x0000000000494064 string=0x0000000000494068 "L"
 *   insn=0x0000000000494068 string=0x000000000049406C "s5"
 *   insn=0x0000000000494070 string=0x00000000004940C8 "Z"
 *   insn=0x0000000000494074 string=0x0000000000494078 "}"
 *   insn=0x0000000000494078 string=0x000000000049407C ""
 *   insn=0x000000000049407C string=0x0000000000494080 "h"
 *   insn=0x0000000000494080 string=0x0000000000494084 ""
 *   insn=0x0000000000494084 string=0x0000000000494088 "k\tH"
 *   insn=0x0000000000494094 string=0x0000000000494098 ""
 *   insn=0x0000000000494098 string=0x000000000049409C ""
 *   insn=0x00000000004940A0 string=0x00000000004940A4 "m"
 *   insn=0x00000000004940A4 string=0x00000000004940A8 "k"
 *   insn=0x00000000004940A8 string=0x00000000004940AC "k"
 *   insn=0x00000000004940BC string=0x00000000004940C0 "s="
 *   insn=0x00000000004940C8 string=0x00000000004940CC "_"
 *   insn=0x00000000004940D0 string=0x00000000004940D4 "L"
 *   insn=0x00000000004940F0 string=0x00000000004940F4 ")"
 *   insn=0x0000000000494100 string=0x0000000000494104 "\t\t"
 *   insn=0x0000000000494104 string=0x0000000000494108 "I"
 *   insn=0x0000000000494114 string=0x0000000000494118 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall std::copy_backward<Caver::GUIApplication::QueuedEvent>@<X0>(
        _QWORD *result@<X0>,
        __int64 *a2@<X1>,
        __int64 *a3@<X2>,
        __int64 *a4@<X8>)
{
  __int64 v5; // x9
  __int64 v6; // x10
  __int64 v7; // x11
  __int64 v8; // x26
  __int64 v10; // x15
  __int64 v11; // x19
  __int64 v12; // x11
  signed __int64 v13; // x8
  __int64 v14; // x23
  signed __int64 v15; // x11
  __int64 v16; // x27
  __int64 v17; // x24
  signed __int64 v18; // x28
  __int64 v19; // x25
  __int64 v20; // x8
  __int64 v21; // x9
  _QWORD *v22; // x22
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x9
  __int64 v27; // x10
  _QWORD *v28; // x22
  __int64 v29; // x8
  __int64 v30; // x8
  __int64 v31; // x8
  __int64 v32; // x10
  unsigned __int64 v33; // x10
  unsigned __int64 v34; // x8
  __int64 *v35; // x13
  __int64 v36; // x10
  __int64 v37; // x12
  __int64 v38; // x11
  unsigned __int64 v39; // x11
  __int64 *v40; // x14
  __int64 *v41; // x10
  __int64 *v42; // x9
  __int64 *v43; // [xsp+8h] [xbp-68h]
  __int64 *v44; // [xsp+10h] [xbp-60h]
  __int64 *v45; // [xsp+18h] [xbp-58h]

  v6 = *a2;
  v5 = a2[1];
  v7 = a2[3] - result[3];
  v8 = v7
     - (v7 >> 3)
     - 0x71C71C71C71C71C7LL * ((*a2 - v5) >> 3)
     - 0x71C71C71C71C71C7LL * ((__int64)(result[2] - *result) >> 3)
     - 7;
  if ( v8 <= 0 )
  {
    v11 = *a3;
    v10 = a3[1];
    v42 = a3 + 2;
    v41 = a3 + 3;
    goto LABEL_44;
  }
  v44 = a4;
  v45 = a3 + 3;
  v43 = a3 + 2;
  v11 = *a3;
  v10 = a3[1];
  do
  {
    v12 = v11 - v10;
    if ( v6 == v5 )
    {
      v14 = *(_QWORD *)(a2[3] - 8) + 504LL;
      v13 = 7;
      if ( v12 )
      {
LABEL_5:
        v15 = 0x8E38E38E38E38E39LL * (v12 >> 3);
        goto LABEL_8;
      }
    }
    else
    {
      v13 = 0x8E38E38E38E38E39LL * ((v6 - v5) >> 3);
      v14 = v6;
      if ( v12 )
        goto LABEL_5;
    }
    v11 = *(_QWORD *)(*v45 - 8) + 504LL;
    v15 = 7;
LABEL_8:
    if ( v15 < v13 )
      v13 = v15;
    if ( v13 >= v8 )
      v16 = v8;
    else
      v16 = v13;
    if ( 72 * v16 >= 1 )
    {
      v17 = 0;
      v18 = 72 * v16 / 0x48uLL + 1;
      do
      {
        v19 = v11 + v17;
        *(_QWORD *)(v11 + v17 - 72) = *(_QWORD *)(v14 + v17 - 72);
        result = (_QWORD *)boost::function<void ()(void *,Caver::GUIEvent *)>::operator=();
        v21 = *(_QWORD *)(v14 + v17 - 32);
        v20 = *(_QWORD *)(v14 + v17 - 24);
        if ( v20 )
          ++*(_QWORD *)(v20 + 8);
        v22 = *(_QWORD **)(v19 - 24);
        *(_QWORD *)(v19 - 32) = v21;
        *(_QWORD *)(v19 - 24) = v20;
        if ( v22 )
        {
          v23 = v22[1] - 1LL;
          v22[1] = v23;
          if ( !v23 )
          {
            result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
            v24 = v22[2] - 1LL;
            v22[2] = v24;
            if ( !v24 )
              result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
          }
        }
        v26 = *(_QWORD *)(v14 + v17 - 16);
        v25 = *(_QWORD *)(v14 + v17 - 8);
        if ( v25 )
          ++*(_QWORD *)(v25 + 8);
        v27 = v11 + v17;
        v28 = *(_QWORD **)(v11 + v17 - 8);
        *(_QWORD *)(v27 - 16) = v26;
        *(_QWORD *)(v27 - 8) = v25;
        if ( v28 )
        {
          v29 = v28[1] - 1LL;
          v28[1] = v29;
          if ( !v29 )
          {
            result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
            v30 = v28[2] - 1LL;
            v28[2] = v30;
            if ( !v30 )
              result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v28 + 24LL))(v28);
          }
        }
        --v18;
        v17 -= 72;
      }
      while ( v18 > 1 );
      v6 = *a2;
      v5 = a2[1];
    }
    v31 = 0x8E38E38E38E38E39LL * ((v6 - v5) >> 3) - v16;
    if ( v31 < 0 )
    {
      v32 = ((unsigned __int64)~v31 * (unsigned __int128)0x2492492492492493uLL) >> 64;
      v33 = ~((v32 + ((unsigned __int64)(~v31 - v32) >> 1)) >> 2);
    }
    else
    {
      if ( v31 <= 6 )
      {
        v6 -= 72 * v16;
        goto LABEL_35;
      }
      v33 = v31 / 7uLL;
    }
    v34 = -7LL * v33 + v31;
    v35 = (__int64 *)(a2[3] + 8 * v33);
    a2[3] = (__int64)v35;
    v5 = *v35;
    v36 = *v35 + 504;
    a2[1] = *v35;
    a2[2] = v36;
    v6 = v5 + 72 * v34;
LABEL_35:
    *a2 = v6;
    v10 = a3[1];
    v37 = 0x8E38E38E38E38E39LL * ((*a3 - v10) >> 3) - v16;
    if ( v37 < 0 )
    {
      v38 = ((unsigned __int64)~v37 * (unsigned __int128)0x2492492492492493uLL) >> 64;
      v39 = ~((v38 + ((unsigned __int64)(~v37 - v38) >> 1)) >> 2);
    }
    else
    {
      if ( v37 <= 6 )
      {
        v11 = *a3 - 72 * v16;
        goto LABEL_41;
      }
      v39 = v37 / 7uLL;
    }
    v40 = (__int64 *)(a3[3] + 8 * v39);
    a3[3] = (__int64)v40;
    v10 = *v40;
    v11 = *v40 + 72 * (-7LL * v39 + v37);
    a3[1] = *v40;
    a3[2] = v10 + 504;
LABEL_41:
    v8 -= v16;
    *a3 = v11;
  }
  while ( v8 > 0 );
  a4 = v44;
  v41 = v45;
  v42 = v43;
LABEL_44:
  *a4 = v11;
  a4[1] = v10;
  a4[2] = *v42;
  a4[3] = *v41;
  return result;
}

