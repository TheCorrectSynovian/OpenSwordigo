/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000274FB4
 * Mangled: _ZNSt5dequeIN5Caver19HeroEntityComponent12SafePositionESaIS2_EE8_M_eraseESt15_Deque_iteratorIS2_RS2_PS2_E
 * Demangled: std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_erase(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>)
 *
 * Callers: 1
 *   0x0000000000203090  std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_erase(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCC60  std::copy<Caver::HeroEntityComponent::SafePosition>(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition const&,Caver::HeroEntityComponent::SafePosition const*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition const&,Caver::HeroEntityComponent::SafePosition const*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>)
 *   0x00000000001FE080  std::copy_backward<Caver::HeroEntityComponent::SafePosition>(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition const&,Caver::HeroEntityComponent::SafePosition const*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition const&,Caver::HeroEntityComponent::SafePosition const*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>)
 *
 * Referenced strings: 72
 *   insn=0x0000000000274FC8 string=0x0000000000274FCC "U"
 *   insn=0x0000000000274FDC string=0x0000000000274FE0 "($@"
 *   insn=0x0000000000274FE0 string=0x0000000000274FE4 "*,A"
 *   insn=0x0000000000274FE4 string=0x0000000000274FE8 ""
 *   insn=0x0000000000275020 string=0x0000000000275024 ""
 *   insn=0x000000000027502C string=0x0000000000275030 "V"
 *   insn=0x0000000000275044 string=0x0000000000275048 "f"
 *   insn=0x0000000000275050 string=0x0000000000275054 "6"
 *   insn=0x0000000000275064 string=0x0000000000275068 "v0"
 *   insn=0x0000000000275070 string=0x0000000000275074 "b"
 *   insn=0x0000000000275078 string=0x000000000027507C " "
 *   insn=0x00000000002750F4 string=0x00000000001FCC60 "0'"
 *   insn=0x0000000000275100 string=0x0000000000275104 "?"
 *   insn=0x0000000000275104 string=0x0000000000275108 "@"
 *   insn=0x0000000000275108 string=0x000000000027510C ")"
 *   insn=0x0000000000275108 string=0x0000000000275170 "P"
 *   insn=0x000000000027510C string=0x0000000000275110 "\t"
 *   insn=0x0000000000275110 string=0x0000000000275114 " "
 *   insn=0x0000000000275114 string=0x0000000000275118 " "
 *   insn=0x0000000000275118 string=0x000000000027511C "9"
 *   insn=0x0000000000275118 string=0x000000000027519C "@"
 *   insn=0x0000000000275124 string=0x0000000000275128 "\t"
 *   insn=0x000000000027512C string=0x0000000000275130 "`"
 *   insn=0x0000000000275130 string=0x0000000000275134 " "
 *   insn=0x0000000000275134 string=0x0000000000275138 "\t@"
 *   insn=0x0000000000275134 string=0x0000000000275158 ""
 *   insn=0x0000000000275138 string=0x000000000027513C ")"
 *   insn=0x000000000027513C string=0x0000000000275140 "\t"
 *   insn=0x0000000000275144 string=0x0000000000275148 ""
 *   insn=0x0000000000275148 string=0x000000000027514C ""
 *   insn=0x000000000027515C string=0x0000000000275160 "("
 *   insn=0x0000000000275164 string=0x0000000000275168 "?"
 *   insn=0x0000000000275170 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000275174 string=0x0000000000275178 "\t!"
 *   insn=0x000000000027517C string=0x0000000000275180 ""
 *   insn=0x0000000000275180 string=0x0000000000275184 "\t"
 *   insn=0x0000000000275184 string=0x0000000000275188 "\n"
 *   insn=0x0000000000275194 string=0x0000000000275198 "@"
 *   insn=0x000000000027519C string=0x00000000002751A0 ""
 *   insn=0x00000000002751A0 string=0x00000000002751A4 ""
 *   insn=0x00000000002751A8 string=0x00000000002751AC ""
 *   insn=0x00000000002751AC string=0x00000000002751B0 ""
 *   insn=0x00000000002751BC string=0x00000000002751C0 "@"
 *   insn=0x00000000002751C0 string=0x00000000002751C4 ""
 *   insn=0x00000000002751C4 string=0x00000000002751C8 ""
 *   insn=0x00000000002751CC string=0x00000000002751D0 ""
 *   insn=0x00000000002751D0 string=0x00000000002751D4 ""
 *   insn=0x00000000002751DC string=0x00000000002751E0 "4"
 *   insn=0x00000000002751E4 string=0x00000000002751E8 "\t!"
 *   insn=0x00000000002751EC string=0x00000000002751F0 ""
 *   insn=0x00000000002751F4 string=0x00000000002751F8 ""
 *   insn=0x0000000000275208 string=0x0000000000275210 "j"
 *   insn=0x0000000000275210 string=0x0000000000275214 "J"
 *   insn=0x0000000000275214 string=0x0000000000275218 "JY"
 *   insn=0x000000000027521C string=0x0000000000275220 "_-"
 *   insn=0x0000000000275234 string=0x0000000000275280 "k&"
 *   insn=0x000000000027523C string=0x0000000000275240 "kU"
 *   insn=0x0000000000275240 string=0x0000000000275244 ")}"
 *   insn=0x0000000000275244 string=0x0000000000275248 ""
 *   insn=0x0000000000275248 string=0x000000000027524C "kI"
 *   insn=0x0000000000275250 string=0x0000000000275264 ""
 *   insn=0x0000000000275254 string=0x000000000027525C "I}"
 *   insn=0x000000000027525C string=0x0000000000275260 "+"
 *   insn=0x0000000000275264 string=0x0000000000275268 "\t"
 *   insn=0x0000000000275268 string=0x000000000027526C "l"
 *   insn=0x000000000027526C string=0x0000000000275270 ""
 *   insn=0x0000000000275270 string=0x0000000000275274 "k)"
 *   insn=0x0000000000275274 string=0x0000000000275278 "*"
 *   insn=0x0000000000275278 string=0x000000000027527C "k%"
 *   insn=0x0000000000275280 string=0x0000000000275284 "j""
 *   insn=0x0000000000275294 string=0x00000000002752B0 ""
 *   insn=0x00000000002752B0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall std::deque<Caver::HeroEntityComponent::SafePosition>::_M_erase(
        __int64 a1@<X0>,
        __int64 *a2@<X1>,
        __int64 *a3@<X8>)
{
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x11
  __int64 v8; // x13
  __int64 v9; // x1
  __int64 v10; // x16
  __int64 v11; // x18
  __int64 v12; // x2
  _BYTE *v13; // x0
  _BYTE *v14; // x17
  unsigned __int64 v15; // x7
  unsigned __int64 v16; // x22
  __int64 *v17; // x23
  _QWORD *v18; // x8
  _DWORD *v19; // x0
  _DWORD *v20; // x0
  int v21; // w9
  __int64 *v22; // x9
  __int64 v23; // x8
  __int64 v24; // x9
  int v25; // w8
  int v26; // w8
  __int64 *v27; // x9
  __int64 v28; // x8
  __int64 v29; // x9
  __int64 v30; // x11
  __int64 *v31; // x8
  __int64 v32; // x10
  __int64 v33; // x10
  __int64 v34; // x11
  unsigned __int64 v35; // x11
  unsigned __int64 v36; // x11

  _ReadStatusReg(TPIDR_EL0);
  v5 = *a2;
  v6 = a2[1];
  v7 = a2[3];
  v8 = *a2 + 40;
  if ( v8 == a2[2] )
    v8 = *(_QWORD *)(v7 + 8);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(_QWORD *)(a1 + 32);
  v11 = *(_QWORD *)(a1 + 40);
  v12 = *(_QWORD *)(a1 + 72);
  v14 = *(_BYTE **)(a1 + 48);
  v13 = *(_BYTE **)(a1 + 56);
  v15 = 0xCCCCCCCCCCCCCCCDLL * ((v10 - v9) >> 3);
  v16 = v15 - 0x3333333333333333LL * ((v5 - v6) >> 3) + 12 * ((v7 - v11) >> 3) - 12;
  if ( v16 < (v15 + 12 * ((v12 - v11) >> 3) - 0x3333333333333333LL * ((v14 - v13) >> 3) - 12) >> 1 )
  {
    if ( v5 == v9 )
    {
      v17 = (__int64 *)(a1 + 16);
    }
    else
    {
      std::copy_backward<Caver::HeroEntityComponent::SafePosition>();
      v17 = (__int64 *)(a1 + 16);
      v5 = *(_QWORD *)(a1 + 16);
      v10 = *(_QWORD *)(a1 + 32);
    }
    v20 = *(_DWORD **)(v5 + 16);
    if ( v5 == v10 - 40 )
    {
      if ( v20 )
      {
        v26 = v20[2] - 1;
        v20[2] = v26;
        if ( !v26 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v20 + 8LL))(v20);
      }
      operator delete(*(void **)(a1 + 24));
      v27 = (__int64 *)(*(_QWORD *)(a1 + 40) + 8LL);
      *(_QWORD *)(a1 + 40) = v27;
      v28 = *v27;
      *(_QWORD *)(a1 + 16) = *v27;
      *(_QWORD *)(a1 + 24) = v28;
      *(_QWORD *)(a1 + 32) = v28 + 480;
    }
    else
    {
      if ( v20 )
      {
        v21 = v20[2] - 1;
        v20[2] = v21;
        if ( !v21 )
        {
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v20 + 8LL))(v20);
          v5 = *v17;
        }
      }
      *v17 = v5 + 40;
    }
    goto LABEL_24;
  }
  if ( (_BYTE *)v8 == v14 )
  {
    v18 = (_QWORD *)(a1 + 48);
    if ( v14 != v13 )
    {
LABEL_8:
      *v18 = v14 - 40;
      v19 = (_DWORD *)*((_QWORD *)v14 - 3);
      if ( !v19 )
        goto LABEL_24;
      goto LABEL_18;
    }
  }
  else
  {
    std::copy<Caver::HeroEntityComponent::SafePosition>();
    v18 = (_QWORD *)(a1 + 48);
    v14 = *(_BYTE **)(a1 + 48);
    v13 = *(_BYTE **)(a1 + 56);
    if ( v14 != v13 )
      goto LABEL_8;
  }
  operator delete(v13);
  v22 = (__int64 *)(*(_QWORD *)(a1 + 72) - 8LL);
  *(_QWORD *)(a1 + 72) = v22;
  v23 = *v22;
  v24 = *v22 + 480;
  *(_QWORD *)(a1 + 48) = v23 + 440;
  *(_QWORD *)(a1 + 56) = v23;
  *(_QWORD *)(a1 + 64) = v24;
  v19 = *(_DWORD **)(v23 + 456);
  if ( !v19 )
    goto LABEL_24;
LABEL_18:
  v25 = v19[2] - 1;
  v19[2] = v25;
  if ( !v25 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 8LL))(v19);
LABEL_24:
  v30 = *(_QWORD *)(a1 + 16);
  v29 = *(_QWORD *)(a1 + 24);
  v31 = *(__int64 **)(a1 + 40);
  v32 = v16 - 0x3333333333333333LL * ((v30 - v29) >> 3);
  if ( v32 < 0 )
  {
    v35 = ~(~v32 / 0xCuLL);
LABEL_29:
    v31 += v35;
    v29 = *v31;
    v36 = v32 - 12 * v35;
    v33 = *v31 + 480;
    v34 = *v31 + 40 * v36;
    goto LABEL_30;
  }
  if ( v32 > 11 )
  {
    v35 = v32 / 0xCuLL;
    goto LABEL_29;
  }
  v33 = *(_QWORD *)(a1 + 32);
  v34 = v30 + 40 * v16;
LABEL_30:
  *a3 = v34;
  a3[1] = v29;
  a3[2] = v33;
  a3[3] = (__int64)v31;
}

