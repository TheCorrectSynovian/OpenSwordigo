/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000494124
 * Mangled: _ZSt4copyIN5Caver14GUIApplication11QueuedEventEESt15_Deque_iteratorIT_RS4_PS4_ES3_IS4_RKS4_PS8_ESB_S7_
 * Demangled: std::copy<Caver::GUIApplication::QueuedEvent>(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent const&,Caver::GUIApplication::QueuedEvent const*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent const&,Caver::GUIApplication::QueuedEvent const*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *
 * Callers: 1
 *   0x0000000000201A50  std::copy<Caver::GUIApplication::QueuedEvent>(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent const&,Caver::GUIApplication::QueuedEvent const*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent const&,Caver::GUIApplication::QueuedEvent const*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *
 * Callees: 1
 *   0x00000000002033A0  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *
 * Referenced strings: 108
 *   insn=0x0000000000494144 string=0x0000000000494148 "*"
 *   insn=0x000000000049414C string=0x0000000000494150 ",4@"
 *   insn=0x0000000000494150 string=0x0000000000494154 ";"
 *   insn=0x0000000000494158 string=0x000000000049415C "{"
 *   insn=0x000000000049415C string=0x0000000000494160 "J"
 *   insn=0x0000000000494168 string=0x000000000049416C ""
 *   insn=0x000000000049416C string=0x0000000000494170 "J"
 *   insn=0x0000000000494170 string=0x0000000000494174 "k"
 *   insn=0x0000000000494174 string=0x0000000000494178 "j)"
 *   insn=0x0000000000494178 string=0x000000000049417C "+"
 *   insn=0x000000000049417C string=0x0000000000494180 "k"
 *   insn=0x0000000000494180 string=0x0000000000494184 "j)"
 *   insn=0x0000000000494184 string=0x0000000000494188 "\"
 *   insn=0x00000000004941A0 string=0x00000000004941A4 "o"
 *   insn=0x00000000004941B4 string=0x00000000004941B8 "O"
 *   insn=0x00000000004941C0 string=0x00000000004941C8 "H"
 *   insn=0x00000000004941C8 string=0x00000000004941CC ")"
 *   insn=0x00000000004941CC string=0x00000000004941D0 ")"
 *   insn=0x00000000004941D0 string=0x00000000004941D4 ")}"
 *   insn=0x00000000004941D4 string=0x00000000004941D8 ""
 *   insn=0x00000000004941D8 string=0x00000000004941DC ""
 *   insn=0x00000000004941DC string=0x00000000004941E0 "}"
 *   insn=0x00000000004941E4 string=0x00000000004941E8 ""
 *   insn=0x00000000004941F0 string=0x00000000004941F4 "h"
 *   insn=0x00000000004941F4 string=0x00000000004941F8 ""
 *   insn=0x0000000000494200 string=0x0000000000494204 "y"
 *   insn=0x0000000000494204 string=0x0000000000494208 ""
 *   insn=0x0000000000494208 string=0x0000000000494228 ""
 *   insn=0x0000000000494210 string=0x0000000000494214 "@"
 *   insn=0x0000000000494220 string=0x0000000000494224 " "
 *   insn=0x0000000000494220 string=0x0000000000494298 "\n"
 *   insn=0x0000000000494238 string=0x000000000049423C "Y"
 *   insn=0x000000000049423C string=0x0000000000494240 "\t"
 *   insn=0x0000000000494244 string=0x0000000000494248 "\n"
 *   insn=0x0000000000494248 string=0x000000000049424C "J"
 *   insn=0x000000000049424C string=0x0000000000494250 "\n"
 *   insn=0x000000000049425C string=0x0000000000494260 "@"
 *   insn=0x0000000000494260 string=0x0000000000494264 ""
 *   insn=0x0000000000494264 string=0x0000000000494268 ""
 *   insn=0x0000000000494268 string=0x000000000049426C "!"
 *   insn=0x000000000049426C string=0x0000000000494270 ""
 *   insn=0x0000000000494274 string=0x0000000000494278 "\t@"
 *   insn=0x000000000049427C string=0x0000000000494280 "@"
 *   insn=0x0000000000494280 string=0x0000000000494284 ""
 *   insn=0x0000000000494284 string=0x0000000000494288 ""
 *   insn=0x000000000049428C string=0x000000000049420C ""
 *   insn=0x0000000000494298 string=0x000000000049429C "J"
 *   insn=0x000000000049429C string=0x00000000004942A0 "\n"
 *   insn=0x00000000004942A8 string=0x00000000004942AC "8"
 *   insn=0x00000000004942AC string=0x00000000004942B0 "@"
 *   insn=0x00000000004942AC string=0x00000000004942F0 "9"
 *   insn=0x00000000004942B0 string=0x00000000004942B4 ""
 *   insn=0x00000000004942B4 string=0x00000000004942B8 ""
 *   insn=0x00000000004942BC string=0x00000000004942C0 ""
 *   insn=0x00000000004942C4 string=0x00000000004942C8 "\t@"
 *   insn=0x00000000004942CC string=0x00000000004942D0 "@"
 *   insn=0x00000000004942D0 string=0x00000000004942D4 ""
 *   insn=0x00000000004942D4 string=0x00000000004942D8 ""
 *   insn=0x00000000004942DC string=0x00000000004942E0 ""
 *   insn=0x00000000004942E4 string=0x00000000004942E8 "@"
 *   insn=0x00000000004942F4 string=0x00000000004942F8 "?"
 *   insn=0x00000000004942FC string=0x0000000000494300 "L"
 *   insn=0x0000000000494304 string=0x0000000000494308 "o"
 *   insn=0x0000000000494314 string=0x0000000000494318 "O"
 *   insn=0x000000000049431C string=0x0000000000494320 ""
 *   insn=0x0000000000494320 string=0x0000000000494324 ""
 *   insn=0x0000000000494324 string=0x0000000000494328 "M"
 *   insn=0x0000000000494330 string=0x0000000000494334 "L"
 *   insn=0x0000000000494334 string=0x0000000000494338 "xb"
 *   insn=0x0000000000494334 string=0x000000000049435C "\t}"
 *   insn=0x0000000000494340 string=0x0000000000494344 "*}"
 *   insn=0x0000000000494344 string=0x0000000000494348 ")"
 *   insn=0x0000000000494348 string=0x000000000049434C "I"
 *   insn=0x000000000049434C string=0x0000000000494350 "\n"
 *   insn=0x0000000000494350 string=0x0000000000494354 "I\tI"
 *   insn=0x000000000049435C string=0x0000000000494360 "\n"
 *   insn=0x0000000000494360 string=0x0000000000494364 ")"
 *   insn=0x0000000000494364 string=0x0000000000494368 ")"
 *   insn=0x000000000049436C string=0x0000000000494370 "+"
 *   insn=0x0000000000494370 string=0x0000000000494374 ")"
 *   insn=0x0000000000494374 string=0x0000000000494378 "("
 *   insn=0x0000000000494378 string=0x000000000049437C "L"
 *   insn=0x0000000000494380 string=0x0000000000494384 "Jik"
 *   insn=0x0000000000494384 string=0x0000000000494388 "I"
 *   insn=0x0000000000494398 string=0x000000000049439C "I"
 *   insn=0x000000000049439C string=0x00000000004943A0 ")"
 *   insn=0x00000000004943A0 string=0x00000000004943A4 ")M"
 *   insn=0x00000000004943A8 string=0x00000000004943AC "?"
 *   insn=0x00000000004943AC string=0x00000000004943B0 "L"
 *   insn=0x00000000004943B0 string=0x00000000004943B4 "v*"
 *   insn=0x00000000004943B0 string=0x00000000004943D8 "(}"
 *   insn=0x00000000004943BC string=0x00000000004943C0 "\n}"
 *   insn=0x00000000004943C0 string=0x00000000004943C4 ""
 *   insn=0x00000000004943C4 string=0x00000000004943C8 "H"
 *   insn=0x00000000004943C8 string=0x00000000004943CC "\n"
 *   insn=0x00000000004943CC string=0x00000000004943D0 "J\tH"
 *   insn=0x00000000004943D8 string=0x00000000004943DC "*"
 *   insn=0x00000000004943DC string=0x00000000004943E0 ""
 *   insn=0x00000000004943E0 string=0x00000000004943E4 "\n"
 *   insn=0x00000000004943E8 string=0x00000000004943EC "K"
 *   insn=0x00000000004943EC string=0x00000000004943F0 "J"
 *   insn=0x00000000004943F0 string=0x00000000004943F4 "I"
 *   insn=0x0000000000494404 string=0x0000000000494408 "61"
 *   insn=0x0000000000494418 string=0x000000000049441C "J"
 *   insn=0x0000000000494434 string=0x0000000000494438 "I"
 *   insn=0x0000000000494444 string=0x0000000000494448 "\t\t"
 *   insn=0x0000000000494448 string=0x000000000049444C "I"
 *   insn=0x0000000000494458 string=0x000000000049445C "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall std::copy<Caver::GUIApplication::QueuedEvent>@<X0>(
        __int64 result@<X0>,
        _QWORD *a2@<X1>,
        __int64 a3@<X2>,
        _QWORD *a4@<X8>)
{
  __int64 v4; // x21
  __int64 v5; // x9
  _QWORD *v6; // x24
  __int64 v7; // x10
  __int64 v8; // x28
  _QWORD *v10; // x22
  _QWORD *v11; // x26
  signed __int64 v12; // x9
  signed __int64 v13; // x8
  __int64 v14; // x19
  __int64 v15; // x25
  __int64 v16; // x8
  __int64 v17; // x9
  _QWORD *v18; // x23
  _QWORD *v19; // x22
  __int64 v20; // x8
  __int64 v21; // x9
  _QWORD *v22; // x24
  __int64 v23; // x8
  __int64 v24; // x8
  _QWORD *v25; // x24
  __int64 v26; // x8
  __int64 v27; // x8
  __int64 v28; // x8
  __int64 v29; // x10
  unsigned __int64 v30; // x9
  unsigned __int64 v31; // x8
  _QWORD *v32; // x12
  __int64 v33; // x9
  __int64 v34; // x12
  __int64 v35; // x9
  __int64 v36; // x10
  unsigned __int64 v37; // x10
  __int64 v38; // x8
  _QWORD *v39; // x10
  _QWORD *v40; // [xsp+0h] [xbp-60h]
  _QWORD *v41; // [xsp+8h] [xbp-58h]

  v4 = result;
  v5 = *(_QWORD *)(result + 16);
  v6 = *(_QWORD **)result;
  v7 = a2[3] - *(_QWORD *)(result + 24);
  v8 = v7
     - (v7 >> 3)
     - 0x71C71C71C71C71C7LL * ((__int64)(*a2 - a2[1]) >> 3)
     - 0x71C71C71C71C71C7LL * ((v5 - *(_QWORD *)result) >> 3)
     - 7;
  if ( v8 <= 0 )
  {
    v10 = *(_QWORD **)a3;
    v34 = *(_QWORD *)(a3 + 8);
    v11 = (_QWORD *)(a3 + 16);
    v39 = (_QWORD *)(a3 + 24);
    goto LABEL_41;
  }
  v41 = a4;
  v10 = *(_QWORD **)a3;
  v11 = (_QWORD *)(a3 + 16);
  v40 = (_QWORD *)(a3 + 24);
  while ( 1 )
  {
    v12 = 0x8E38E38E38E38E39LL * ((v5 - (__int64)v6) >> 3);
    v13 = 0x8E38E38E38E38E39LL * ((__int64)(*v11 - (_QWORD)v10) >> 3);
    if ( v13 >= v12 )
      v13 = v12;
    if ( v13 >= v8 )
      v14 = v8;
    else
      v14 = v13;
    if ( 72 * v14 >= 1 )
    {
      v15 = v14 + 1;
      while ( 1 )
      {
        v18 = v6 + 1;
        *v10 = *v6;
        v19 = v10 + 1;
        result = boost::function<void ()(void *,Caver::GUIEvent *)>::operator=();
        v21 = v6[5];
        v20 = v6[6];
        if ( v20 )
          ++*(_QWORD *)(v20 + 8);
        v22 = (_QWORD *)v19[5];
        v19[4] = v21;
        v19[5] = v20;
        if ( !v22 )
          break;
        v23 = v22[1] - 1LL;
        v22[1] = v23;
        if ( v23 )
          break;
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
        v24 = v22[2] - 1LL;
        v22[2] = v24;
        if ( v24 )
          break;
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
        v17 = v18[6];
        v16 = v18[7];
        if ( v16 )
          goto LABEL_19;
LABEL_20:
        v25 = (_QWORD *)v19[7];
        v19[6] = v17;
        v19[7] = v16;
        if ( v25 )
        {
          v26 = v25[1] - 1LL;
          v25[1] = v26;
          if ( !v26 )
          {
            result = (*(__int64 (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
            v27 = v25[2] - 1LL;
            v25[2] = v27;
            if ( !v27 )
              result = (*(__int64 (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
          }
        }
        --v15;
        v6 = v18 + 8;
        v10 = v19 + 8;
        if ( v15 <= 1 )
        {
          v6 = *(_QWORD **)v4;
          goto LABEL_26;
        }
      }
      v17 = v18[6];
      v16 = v18[7];
      if ( !v16 )
        goto LABEL_20;
LABEL_19:
      ++*(_QWORD *)(v16 + 8);
      goto LABEL_20;
    }
LABEL_26:
    v28 = v14 - 0x71C71C71C71C71C7LL * (((__int64)v6 - *(_QWORD *)(v4 + 8)) >> 3);
    if ( v28 < 0 )
    {
      v29 = ((unsigned __int64)~v28 * (unsigned __int128)0x2492492492492493uLL) >> 64;
      v30 = ~((v29 + ((unsigned __int64)(~v28 - v29) >> 1)) >> 2);
    }
    else
    {
      if ( v28 <= 6 )
      {
        v6 += 9 * v14;
        goto LABEL_32;
      }
      v30 = v28 / 7uLL;
    }
    v31 = -7LL * v30 + v28;
    v32 = (_QWORD *)(*(_QWORD *)(v4 + 24) + 8 * v30);
    *(_QWORD *)(v4 + 24) = v32;
    v33 = *v32 + 504LL;
    v6 = (_QWORD *)(*v32 + 72 * v31);
    *(_QWORD *)(v4 + 8) = *v32;
    *(_QWORD *)(v4 + 16) = v33;
LABEL_32:
    *(_QWORD *)v4 = v6;
    v34 = *(_QWORD *)(a3 + 8);
    v35 = v14 - 0x71C71C71C71C71C7LL * ((*(_QWORD *)a3 - v34) >> 3);
    if ( v35 < 0 )
    {
      v36 = ((unsigned __int64)~v35 * (unsigned __int128)0x2492492492492493uLL) >> 64;
      v37 = ~((v36 + ((unsigned __int64)(~v35 - v36) >> 1)) >> 2);
    }
    else
    {
      if ( v35 <= 6 )
      {
        v10 = (_QWORD *)(*(_QWORD *)a3 + 72 * v14);
        goto LABEL_38;
      }
      v37 = v35 / 7uLL;
    }
    v38 = *(_QWORD *)(a3 + 24);
    *(_QWORD *)(a3 + 24) = v38 + 8 * v37;
    v34 = *(_QWORD *)(v38 + 8 * v37);
    v10 = (_QWORD *)(v34 + 72 * (-7LL * v37 + v35));
    *(_QWORD *)(a3 + 8) = v34;
    *(_QWORD *)(a3 + 16) = v34 + 504;
LABEL_38:
    v8 -= v14;
    *(_QWORD *)a3 = v10;
    if ( v8 < 1 )
      break;
    v5 = *(_QWORD *)(v4 + 16);
  }
  v39 = v40;
  a4 = v41;
LABEL_41:
  *a4 = v10;
  a4[1] = v34;
  a4[2] = *v11;
  a4[3] = *v39;
  return result;
}

