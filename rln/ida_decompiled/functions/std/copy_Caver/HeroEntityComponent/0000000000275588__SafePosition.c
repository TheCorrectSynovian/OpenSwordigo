/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000275588
 * Mangled: _ZSt4copyIN5Caver19HeroEntityComponent12SafePositionEESt15_Deque_iteratorIT_RS4_PS4_ES3_IS4_RKS4_PS8_ESB_S7_
 * Demangled: std::copy<Caver::HeroEntityComponent::SafePosition>(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition const&,Caver::HeroEntityComponent::SafePosition const*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition const&,Caver::HeroEntityComponent::SafePosition const*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>)
 *
 * Callers: 1
 *   0x00000000001FCC60  std::copy<Caver::HeroEntityComponent::SafePosition>(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition const&,Caver::HeroEntityComponent::SafePosition const*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition const&,Caver::HeroEntityComponent::SafePosition const*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>)
 *
 * Callees: 0
 *
 * Referenced strings: 82
 *   insn=0x00000000002755A8 string=0x00000000002755AC "*"
 *   insn=0x00000000002755B0 string=0x00000000002755B4 ",4@"
 *   insn=0x00000000002755BC string=0x00000000002755C0 "J"
 *   insn=0x00000000002755C8 string=0x00000000002755CC "k"
 *   insn=0x00000000002755D0 string=0x00000000002755D4 "J"
 *   insn=0x00000000002755D4 string=0x00000000002755D8 "k}"
 *   insn=0x00000000002755D8 string=0x00000000002755DC "J-"
 *   insn=0x00000000002755DC string=0x00000000002755E0 "+"
 *   insn=0x00000000002755E0 string=0x00000000002755E4 "k"
 *   insn=0x00000000002755E4 string=0x00000000002755E8 "j)"
 *   insn=0x00000000002755E8 string=0x00000000002755EC "Y1"
 *   insn=0x00000000002755F0 string=0x00000000002755F4 "?"
 *   insn=0x00000000002755F4 string=0x00000000002755F8 "m"
 *   insn=0x00000000002755F8 string=0x00000000002757C4 "{.@"
 *   insn=0x0000000000275600 string=0x0000000000275604 ""
 *   insn=0x0000000000275608 string=0x000000000027560C "vB"
 *   insn=0x0000000000275610 string=0x0000000000275614 "mU"
 *   insn=0x0000000000275614 string=0x0000000000275618 "n"
 *   insn=0x0000000000275628 string=0x000000000027562C ")"
 *   insn=0x000000000027562C string=0x0000000000275630 ")"
 *   insn=0x0000000000275630 string=0x0000000000275634 ")}"
 *   insn=0x0000000000275634 string=0x0000000000275638 ""
 *   insn=0x0000000000275638 string=0x000000000027563C ""
 *   insn=0x000000000027563C string=0x0000000000275640 "}"
 *   insn=0x0000000000275644 string=0x0000000000275648 ""
 *   insn=0x0000000000275654 string=0x0000000000275658 ""
 *   insn=0x000000000027565C string=0x0000000000275660 ""
 *   insn=0x0000000000275668 string=0x000000000027566C "h"
 *   insn=0x0000000000275670 string=0x0000000000275674 "h"
 *   insn=0x000000000027567C string=0x0000000000275680 "\t\t@"
 *   insn=0x000000000027567C string=0x000000000027568C "`@"
 *   insn=0x0000000000275680 string=0x0000000000275684 ")"
 *   insn=0x0000000000275684 string=0x0000000000275688 "\t\t"
 *   insn=0x000000000027568C string=0x0000000000275690 "h"
 *   insn=0x0000000000275694 string=0x0000000000275698 "@"
 *   insn=0x0000000000275698 string=0x000000000027569C ""
 *   insn=0x000000000027569C string=0x00000000002756A0 ""
 *   insn=0x00000000002756A4 string=0x00000000002756A8 ""
 *   insn=0x00000000002756A8 string=0x00000000002756AC ""
 *   insn=0x00000000002756C0 string=0x00000000002756C4 "`"
 *   insn=0x00000000002756C4 string=0x00000000002756C8 "{"
 *   insn=0x00000000002756D4 string=0x00000000002756DC "n"
 *   insn=0x00000000002756E4 string=0x00000000002756E8 ""
 *   insn=0x00000000002756E8 string=0x00000000002756EC "]"
 *   insn=0x00000000002756F8 string=0x0000000000275718 "\t}"
 *   insn=0x0000000000275704 string=0x0000000000275708 ")}"
 *   insn=0x0000000000275708 string=0x000000000027570C "\n"
 *   insn=0x000000000027570C string=0x0000000000275710 "II"
 *   insn=0x0000000000275718 string=0x000000000027571C ")"
 *   insn=0x0000000000275720 string=0x0000000000275724 "+"
 *   insn=0x0000000000275724 string=0x0000000000275728 "(!"
 *   insn=0x0000000000275728 string=0x000000000027572C "L"
 *   insn=0x0000000000275730 string=0x0000000000275734 "Jik"
 *   insn=0x0000000000275734 string=0x0000000000275738 "I"
 *   insn=0x0000000000275744 string=0x0000000000275748 "j.@"
 *   insn=0x0000000000275748 string=0x000000000027574C "I"
 *   insn=0x000000000027574C string=0x0000000000275750 ")"
 *   insn=0x0000000000275750 string=0x0000000000275754 ")]"
 *   insn=0x0000000000275758 string=0x000000000027575C "?-"
 *   insn=0x0000000000275760 string=0x0000000000275780 "(}"
 *   insn=0x0000000000275768 string=0x00000000002757AC "9"
 *   insn=0x000000000027576C string=0x0000000000275770 "}"
 *   insn=0x0000000000275770 string=0x0000000000275774 "\n"
 *   insn=0x0000000000275774 string=0x0000000000275778 "JH"
 *   insn=0x000000000027577C string=0x0000000000275788 "h"
 *   insn=0x0000000000275780 string=0x0000000000275784 "\n"
 *   insn=0x0000000000275788 string=0x000000000027578C "K"
 *   insn=0x000000000027578C string=0x0000000000275790 "I%"
 *   insn=0x0000000000275794 string=0x0000000000275798 "l"
 *   insn=0x0000000000275798 string=0x000000000027579C "ik"
 *   insn=0x000000000027579C string=0x00000000002757A0 "j"
 *   insn=0x00000000002757A0 string=0x00000000002757A4 ";-"
 *   insn=0x00000000002757A4 string=0x00000000002757A8 "k"
 *   insn=0x00000000002757AC string=0x00000000002757B0 "?"
 *   insn=0x00000000002757B0 string=0x00000000002757B4 "{"
 *   insn=0x00000000002757B4 string=0x00000000002757B8 "j"
 *   insn=0x00000000002757C0 string=0x00000000002757D0 "-"
 *   insn=0x00000000002757C4 string=0x00000000002757C8 "vB"
 *   insn=0x00000000002757C8 string=0x00000000002757CC "jb"
 *   insn=0x00000000002757E0 string=0x00000000002757E4 "\t\t"
 *   insn=0x00000000002757E4 string=0x00000000002757E8 "I"
 *   insn=0x00000000002757F4 string=0x00000000002757F8 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall std::copy<Caver::HeroEntityComponent::SafePosition>@<X0>(
        __int64 result@<X0>,
        _QWORD *a2@<X1>,
        __int64 *a3@<X2>,
        __int64 *a4@<X8>)
{
  __int64 *v4; // x21
  __int64 v5; // x9
  __int64 v6; // x20
  signed __int64 v7; // x25
  __int64 v9; // x27
  __int64 *v10; // x22
  signed __int64 v11; // x9
  signed __int64 v12; // x8
  signed __int64 v13; // x23
  __int64 v14; // x28
  __int64 v15; // x8
  int v16; // w8
  __int128 v17; // q0
  __int64 v18; // x8
  unsigned __int64 v19; // x9
  unsigned __int64 v20; // x8
  __int64 *v21; // x12
  __int64 v22; // x9
  __int64 v23; // x11
  __int64 v24; // x9
  unsigned __int64 v25; // x10
  unsigned __int64 v26; // x9
  __int64 *v27; // x12
  __int64 v28; // x10
  __int64 *v29; // x10
  __int64 *v30; // [xsp+0h] [xbp-60h]
  __int64 *v31; // [xsp+8h] [xbp-58h]

  v4 = (__int64 *)result;
  v5 = *(_QWORD *)(result + 16);
  v6 = *(_QWORD *)result;
  v7 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(*a2 - a2[1]) >> 3)
     + 12 * ((__int64)(a2[3] - *(_QWORD *)(result + 24)) >> 3)
     - 0x3333333333333333LL * ((v5 - *(_QWORD *)result) >> 3)
     - 12;
  if ( v7 <= 0 )
  {
    v9 = *a3;
    v23 = a3[1];
    v10 = a3 + 2;
    v29 = a3 + 3;
    goto LABEL_33;
  }
  v31 = a4;
  v9 = *a3;
  v10 = a3 + 2;
  v30 = a3 + 3;
  while ( 1 )
  {
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((v5 - v6) >> 3);
    v12 = 0xCCCCCCCCCCCCCCCDLL * ((*v10 - v9) >> 3);
    if ( v12 >= v11 )
      v12 = v11;
    if ( v12 >= v7 )
      v13 = v7;
    else
      v13 = v12;
    if ( 40 * v13 >= 1 )
    {
      v14 = v13 + 1;
      do
      {
        *(_QWORD *)v9 = *(_QWORD *)v6;
        *(_DWORD *)(v9 + 8) = *(_DWORD *)(v6 + 8);
        v15 = *(_QWORD *)(v6 + 16);
        if ( v15 )
          ++*(_DWORD *)(v15 + 8);
        result = *(_QWORD *)(v9 + 16);
        *(_QWORD *)(v9 + 16) = v15;
        if ( result )
        {
          v16 = *(_DWORD *)(result + 8) - 1;
          *(_DWORD *)(result + 8) = v16;
          if ( !v16 )
            result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
        }
        v17 = *(_OWORD *)(v6 + 24);
        --v14;
        v6 += 40;
        *(_OWORD *)(v9 + 24) = v17;
        v9 += 40;
      }
      while ( v14 > 1 );
      v6 = *v4;
    }
    v18 = v13 - 0x3333333333333333LL * ((v6 - v4[1]) >> 3);
    if ( v18 < 0 )
    {
      v19 = ~(~v18 / 0xCuLL);
    }
    else
    {
      if ( v18 <= 11 )
      {
        v6 += 40 * v13;
        goto LABEL_24;
      }
      v19 = v18 / 0xCuLL;
    }
    v20 = v18 - 12 * v19;
    v21 = (__int64 *)(v4[3] + 8 * v19);
    v4[3] = (__int64)v21;
    v22 = *v21 + 480;
    v6 = *v21 + 40 * v20;
    v4[1] = *v21;
    v4[2] = v22;
LABEL_24:
    *v4 = v6;
    v23 = a3[1];
    v24 = v13 - 0x3333333333333333LL * ((*a3 - v23) >> 3);
    if ( v24 < 0 )
    {
      v25 = ~(~v24 / 0xCuLL);
    }
    else
    {
      if ( v24 <= 11 )
      {
        v9 = *a3 + 40 * v13;
        goto LABEL_30;
      }
      v25 = v24 / 0xCuLL;
    }
    v26 = v24 - 12 * v25;
    v27 = (__int64 *)(a3[3] + 8 * v25);
    a3[3] = (__int64)v27;
    v23 = *v27;
    v28 = *v27 + 480;
    v9 = *v27 + 40 * v26;
    a3[1] = *v27;
    a3[2] = v28;
LABEL_30:
    v7 -= v13;
    *a3 = v9;
    if ( v7 < 1 )
      break;
    v5 = v4[2];
  }
  v29 = v30;
  a4 = v31;
LABEL_33:
  *a4 = v9;
  a4[1] = v23;
  a4[2] = *v10;
  a4[3] = *v29;
  return result;
}

