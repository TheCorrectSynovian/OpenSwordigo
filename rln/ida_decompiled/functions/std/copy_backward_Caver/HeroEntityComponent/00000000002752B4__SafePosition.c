/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002752B4
 * Mangled: _ZSt13copy_backwardIN5Caver19HeroEntityComponent12SafePositionEESt15_Deque_iteratorIT_RS4_PS4_ES3_IS4_RKS4_PS8_ESB_S7_
 * Demangled: std::copy_backward<Caver::HeroEntityComponent::SafePosition>(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition const&,Caver::HeroEntityComponent::SafePosition const*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition const&,Caver::HeroEntityComponent::SafePosition const*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>)
 *
 * Callers: 1
 *   0x00000000001FE080  std::copy_backward<Caver::HeroEntityComponent::SafePosition>(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition const&,Caver::HeroEntityComponent::SafePosition const*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition const&,Caver::HeroEntityComponent::SafePosition const*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>)
 *
 * Callees: 0
 *
 * Referenced strings: 80
 *   insn=0x00000000002752E8 string=0x00000000002752EC "k"
 *   insn=0x00000000002752EC string=0x00000000002752F0 "M"
 *   insn=0x0000000000275300 string=0x0000000000275304 "k"
 *   insn=0x0000000000275308 string=0x000000000027530C "k5"
 *   insn=0x0000000000275314 string=0x0000000000275318 "y1"
 *   insn=0x000000000027531C string=0x0000000000275320 "?"
 *   insn=0x0000000000275320 string=0x0000000000275324 "-"
 *   insn=0x0000000000275324 string=0x0000000000275548 "w>@"
 *   insn=0x0000000000275328 string=0x000000000027532C "hb"
 *   insn=0x0000000000275330 string=0x0000000000275334 "hB"
 *   insn=0x0000000000275338 string=0x000000000027533C "w>@"
 *   insn=0x0000000000275344 string=0x0000000000275348 "pU"
 *   insn=0x0000000000275348 string=0x000000000027534C "q"
 *   insn=0x000000000027534C string=0x0000000000275350 "L"
 *   insn=0x000000000027535C string=0x0000000000275360 "}"
 *   insn=0x0000000000275364 string=0x0000000000275368 "+"
 *   insn=0x0000000000275368 string=0x000000000027536C "k"
 *   insn=0x000000000027536C string=0x0000000000275370 "k}"
 *   insn=0x0000000000275370 string=0x0000000000275374 ""
 *   insn=0x0000000000275378 string=0x000000000027537C ""
 *   insn=0x0000000000275384 string=0x0000000000275388 "+"
 *   insn=0x000000000027538C string=0x0000000000275390 "k"
 *   insn=0x0000000000275390 string=0x0000000000275394 "k"
 *   insn=0x0000000000275394 string=0x0000000000275398 "w"
 *   insn=0x00000000002753A0 string=0x00000000002753A4 "h"
 *   insn=0x00000000002753B0 string=0x00000000002753B4 ""
 *   insn=0x00000000002753BC string=0x00000000002753C0 "}"
 *   insn=0x00000000002753BC string=0x0000000000275454 "H"
 *   insn=0x00000000002753C0 string=0x00000000002753C4 ""
 *   insn=0x00000000002753D0 string=0x00000000002753D4 "*"
 *   insn=0x00000000002753D8 string=0x00000000002753DC "\n"
 *   insn=0x00000000002753DC string=0x00000000002753E0 "*"
 *   insn=0x00000000002753E0 string=0x00000000002753E4 "\n"
 *   insn=0x00000000002753E4 string=0x00000000002753E8 ")"
 *   insn=0x00000000002753EC string=0x00000000002753F0 "*\t@"
 *   insn=0x00000000002753F0 string=0x00000000002753F4 "J"
 *   insn=0x00000000002753F4 string=0x00000000002753F8 "*\t"
 *   insn=0x00000000002753FC string=0x0000000000275400 "\t"
 *   insn=0x0000000000275404 string=0x0000000000275408 "@"
 *   insn=0x0000000000275408 string=0x000000000027540C ""
 *   insn=0x000000000027540C string=0x0000000000275410 ""
 *   insn=0x0000000000275414 string=0x0000000000275418 ""
 *   insn=0x0000000000275418 string=0x000000000027541C ""
 *   insn=0x0000000000275434 string=0x0000000000275438 "{"
 *   insn=0x0000000000275448 string=0x0000000000275450 "q"
 *   insn=0x0000000000275454 string=0x0000000000275458 ""
 *   insn=0x000000000027545C string=0x0000000000275460 "-"
 *   insn=0x0000000000275470 string=0x0000000000275474 "j)"
 *   insn=0x0000000000275470 string=0x0000000000275490 "\t}"
 *   insn=0x000000000027547C string=0x0000000000275480 ")}"
 *   insn=0x0000000000275480 string=0x0000000000275484 "\n"
 *   insn=0x0000000000275484 string=0x0000000000275488 "JI"
 *   insn=0x0000000000275490 string=0x0000000000275494 "*"
 *   insn=0x0000000000275498 string=0x000000000027549C "L"
 *   insn=0x000000000027549C string=0x00000000002754A0 "H!"
 *   insn=0x00000000002754A0 string=0x00000000002754A4 "-"
 *   insn=0x00000000002754A8 string=0x00000000002754AC ")il"
 *   insn=0x00000000002754AC string=0x00000000002754B0 "*"
 *   insn=0x00000000002754B8 string=0x00000000002754BC "\n%"
 *   insn=0x00000000002754C0 string=0x00000000002754C4 "m>@"
 *   insn=0x00000000002754E0 string=0x00000000002754E4 "w5"
 *   insn=0x00000000002754E8 string=0x000000000027552C "9"
 *   insn=0x00000000002754EC string=0x00000000002754F0 "}"
 *   insn=0x00000000002754F0 string=0x00000000002754F4 ""
 *   insn=0x00000000002754F4 string=0x00000000002754F8 "kH"
 *   insn=0x00000000002754FC string=0x0000000000275508 "h"
 *   insn=0x0000000000275500 string=0x0000000000275504 ""
 *   insn=0x0000000000275508 string=0x000000000027550C "m"
 *   insn=0x000000000027550C string=0x0000000000275510 "k1"
 *   insn=0x0000000000275514 string=0x0000000000275518 "n"
 *   insn=0x0000000000275520 string=0x0000000000275524 "w="
 *   insn=0x0000000000275524 string=0x0000000000275528 "o"
 *   insn=0x000000000027552C string=0x0000000000275530 "?"
 *   insn=0x0000000000275530 string=0x0000000000275534 "w"
 *   insn=0x0000000000275548 string=0x000000000027554C "iB"
 *   insn=0x000000000027554C string=0x0000000000275550 "jb"
 *   insn=0x0000000000275554 string=0x0000000000275558 ")"
 *   insn=0x0000000000275564 string=0x0000000000275568 "\t\t"
 *   insn=0x0000000000275568 string=0x000000000027556C "I"
 *   insn=0x0000000000275578 string=0x000000000027557C "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall std::copy_backward<Caver::HeroEntityComponent::SafePosition>@<X0>(
        __int64 result@<X0>,
        __int64 *a2@<X1>,
        __int64 *a3@<X2>,
        __int64 *a4@<X8>)
{
  __int64 v5; // x9
  __int64 v6; // x10
  signed __int64 v7; // x25
  __int64 v9; // x15
  __int64 v10; // x23
  __int64 v11; // x11
  signed __int64 v12; // x8
  __int64 v13; // x22
  signed __int64 v14; // x11
  signed __int64 v15; // x20
  __int64 v16; // x27
  signed __int64 v17; // x28
  __int64 v18; // x8
  __int64 v19; // x9
  int v20; // w8
  __int128 v21; // q0
  __int64 v22; // x8
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  unsigned __int64 v25; // x8
  __int64 *v26; // x13
  __int64 v27; // x10
  __int64 v28; // x12
  unsigned __int64 v29; // x11
  __int64 *v30; // x14
  __int64 *v31; // x10
  __int64 *v32; // x9
  __int64 *v33; // [xsp+8h] [xbp-68h]
  __int64 *v34; // [xsp+10h] [xbp-60h]
  __int64 *v35; // [xsp+18h] [xbp-58h]

  v6 = *a2;
  v5 = a2[1];
  v7 = 0xCCCCCCCCCCCCCCCDLL * ((*a2 - v5) >> 3)
     + 12 * ((a2[3] - *(_QWORD *)(result + 24)) >> 3)
     - 0x3333333333333333LL * ((__int64)(*(_QWORD *)(result + 16) - *(_QWORD *)result) >> 3)
     - 12;
  if ( v7 <= 0 )
  {
    v10 = *a3;
    v9 = a3[1];
    v32 = a3 + 2;
    v31 = a3 + 3;
    goto LABEL_37;
  }
  v34 = a4;
  v35 = a3 + 3;
  v33 = a3 + 2;
  v10 = *a3;
  v9 = a3[1];
  do
  {
    v11 = v10 - v9;
    if ( v6 == v5 )
    {
      v13 = *(_QWORD *)(a2[3] - 8) + 480LL;
      v12 = 12;
      if ( v11 )
      {
LABEL_5:
        v14 = 0xCCCCCCCCCCCCCCCDLL * (v11 >> 3);
        goto LABEL_8;
      }
    }
    else
    {
      v12 = 0xCCCCCCCCCCCCCCCDLL * ((v6 - v5) >> 3);
      v13 = v6;
      if ( v11 )
        goto LABEL_5;
    }
    v10 = *(_QWORD *)(*v35 - 8) + 480LL;
    v14 = 12;
LABEL_8:
    if ( v14 < v12 )
      v12 = v14;
    if ( v12 >= v7 )
      v15 = v7;
    else
      v15 = v12;
    if ( 40 * v15 >= 1 )
    {
      v16 = 0;
      v17 = 40 * v15 / 0x28uLL + 1;
      do
      {
        v18 = v10 + v16;
        *(_QWORD *)(v18 - 40) = *(_QWORD *)(v13 + v16 - 40);
        *(_DWORD *)(v18 - 32) = *(_DWORD *)(v13 + v16 - 32);
        v19 = *(_QWORD *)(v13 + v16 - 24);
        if ( v19 )
          ++*(_DWORD *)(v19 + 8);
        result = *(_QWORD *)(v18 - 24);
        *(_QWORD *)(v18 - 24) = v19;
        if ( result )
        {
          v20 = *(_DWORD *)(result + 8) - 1;
          *(_DWORD *)(result + 8) = v20;
          if ( !v20 )
            result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        }
        v21 = *(_OWORD *)(v13 + v16 - 16);
        --v17;
        v22 = v10 + v16;
        v16 -= 40;
        *(_OWORD *)(v22 - 16) = v21;
      }
      while ( v17 > 1 );
      v6 = *a2;
      v5 = a2[1];
    }
    v23 = 0xCCCCCCCCCCCCCCCDLL * ((v6 - v5) >> 3) - v15;
    if ( v23 < 0 )
    {
      v24 = ~(~v23 / 0xCuLL);
    }
    else
    {
      if ( v23 <= 11 )
      {
        v6 -= 40 * v15;
        goto LABEL_28;
      }
      v24 = v23 / 0xCuLL;
    }
    v25 = v23 - 12 * v24;
    v26 = (__int64 *)(a2[3] + 8 * v24);
    a2[3] = (__int64)v26;
    v5 = *v26;
    v27 = *v26 + 480;
    a2[1] = *v26;
    a2[2] = v27;
    v6 = v5 + 40 * v25;
LABEL_28:
    *a2 = v6;
    v9 = a3[1];
    v28 = 0xCCCCCCCCCCCCCCCDLL * ((*a3 - v9) >> 3) - v15;
    if ( v28 < 0 )
    {
      v29 = ~(~v28 / 0xCuLL);
    }
    else
    {
      if ( v28 <= 11 )
      {
        v10 = *a3 - 40 * v15;
        goto LABEL_34;
      }
      v29 = v28 / 0xCuLL;
    }
    v30 = (__int64 *)(a3[3] + 8 * v29);
    a3[3] = (__int64)v30;
    v9 = *v30;
    v10 = *v30 + 40 * (v28 - 12 * v29);
    a3[1] = *v30;
    a3[2] = v9 + 480;
LABEL_34:
    v7 -= v15;
    *a3 = v10;
  }
  while ( v7 > 0 );
  a4 = v34;
  v31 = v35;
  v32 = v33;
LABEL_37:
  *a4 = v10;
  a4[1] = v9;
  a4[2] = *v32;
  a4[3] = *v31;
  return result;
}

