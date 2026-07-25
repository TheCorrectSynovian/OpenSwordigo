/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042543C
 * Mangled: _ZN5Caver7MapView35AnimateLocationMarkerFromNodeToNodeERKN5boost10shared_ptrINS_7MapNodeEEES6_
 * Demangled: Caver::MapView::AnimateLocationMarkerFromNodeToNode(boost::shared_ptr<Caver::MapNode> const&,boost::shared_ptr<Caver::MapNode> const&)
 *
 * Callers: 1
 *   0x00000000001FD780  Caver::MapView::AnimateLocationMarkerFromNodeToNode(boost::shared_ptr<Caver::MapNode> const&,boost::shared_ptr<Caver::MapNode> const&)
 *
 * Callees: 12
 *   0x00000000001F4B70  Caver::GUIAnimation::GUIAnimation(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8090  Caver::GUIPropertyValue::ValueWithFloat(float)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FABF0  boost::detail::shared_count::shared_count<Caver::GUIAnimation>(Caver::GUIAnimation *)
 *   0x0000000000202260  Caver::Map::NodeForName(std::string const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 142
 *   insn=0x0000000000425450 string=0x0000000000425454 "W"
 *   insn=0x0000000000425468 string=0x000000000042546C "*$@"
 *   insn=0x0000000000425470 string=0x0000000000425474 "("
 *   insn=0x0000000000425474 string=0x0000000000425478 ""
 *   insn=0x0000000000425478 string=0x000000000042547C "("
 *   insn=0x0000000000425488 string=0x000000000042548C "6"
 *   insn=0x0000000000425490 string=0x0000000000425494 ""
 *   insn=0x00000000004254A4 string=0x00000000004254A8 "\t@"
 *   insn=0x00000000004254B0 string=0x00000000004254B4 ""
 *   insn=0x00000000004254C4 string=0x00000000004254C8 "@"
 *   insn=0x00000000004254D4 string=0x00000000004254D8 "\n"
 *   insn=0x00000000004254D8 string=0x00000000004254DC "J"
 *   insn=0x00000000004254DC string=0x00000000004254E0 "\n"
 *   insn=0x00000000004254EC string=0x00000000004254F0 "5"
 *   insn=0x00000000004254F4 string=0x00000000004254F8 ""
 *   insn=0x0000000000425508 string=0x000000000042550C "\t@"
 *   insn=0x0000000000425514 string=0x0000000000425518 ""
 *   insn=0x0000000000425528 string=0x000000000042552C "@"
 *   insn=0x0000000000425534 string=0x0000000000425538 "*@"
 *   insn=0x0000000000425538 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000425540 string=0x00000000001F4B70 "P'"
 *   insn=0x0000000000425550 string=0x00000000001FABF0 "0'"
 *   insn=0x0000000000425560 string=0x0000000000425564 "v"
 *   insn=0x0000000000425570 string=0x00000000001F8090 "0'"
 *   insn=0x0000000000425580 string=0x0000000000425584 "\n"
 *   insn=0x0000000000425584 string=0x0000000000425588 "J"
 *   insn=0x0000000000425588 string=0x000000000042558C "\n"
 *   insn=0x0000000000425594 string=0x0000000000425598 "5"
 *   insn=0x000000000042559C string=0x00000000004255A0 ""
 *   insn=0x00000000004255AC string=0x00000000004255B0 "\t@"
 *   insn=0x00000000004255BC string=0x00000000004255C0 ""
 *   insn=0x00000000004255CC string=0x00000000004255D0 "@"
 *   insn=0x00000000004255DC string=0x00000000004255E0 "5"
 *   insn=0x00000000004255E0 string=0x0000000000425624 "v"
 *   insn=0x00000000004255E4 string=0x00000000004255E8 ""
 *   insn=0x00000000004255F4 string=0x00000000004255F8 "\t@"
 *   insn=0x0000000000425604 string=0x0000000000425608 ""
 *   insn=0x0000000000425614 string=0x0000000000425618 "@"
 *   insn=0x0000000000425640 string=0x0000000000425644 "\n"
 *   insn=0x0000000000425644 string=0x0000000000425648 "J"
 *   insn=0x0000000000425648 string=0x000000000042564C "\n"
 *   insn=0x0000000000425654 string=0x0000000000425658 "5"
 *   insn=0x000000000042565C string=0x0000000000425660 ""
 *   insn=0x000000000042566C string=0x0000000000425670 "\t@"
 *   insn=0x000000000042567C string=0x0000000000425680 ""
 *   insn=0x000000000042568C string=0x0000000000425690 "@"
 *   insn=0x000000000042569C string=0x00000000004256A0 "5"
 *   insn=0x00000000004256A4 string=0x00000000004256A8 ""
 *   insn=0x00000000004256B4 string=0x00000000004256B8 "\t@"
 *   insn=0x00000000004256C4 string=0x00000000004256C8 ""
 *   insn=0x00000000004256D4 string=0x00000000004256D8 "@"
 *   insn=0x00000000004256E4 string=0x00000000004256E8 "h"
 *   insn=0x00000000004256E8 string=0x00000000004256EC " "
 *   insn=0x00000000004256F0 string=0x00000000004256F4 "\t"
 *   insn=0x0000000000425704 string=0x0000000000425708 ")"
 *   insn=0x0000000000425708 string=0x000000000042570C "J"
 *   insn=0x000000000042570C string=0x0000000000425710 ")"
 *   insn=0x0000000000425710 string=0x0000000000425714 "J"
 *   insn=0x0000000000425714 string=0x0000000000425718 "iii"
 *   insn=0x0000000000425718 string=0x000000000042571C "jij"
 *   insn=0x000000000042571C string=0x0000000000425720 "?"
 *   insn=0x0000000000425720 string=0x0000000000425724 "`"
 *   insn=0x0000000000425724 string=0x0000000000425728 "i"
 *   insn=0x000000000042572C string=0x0000000000425730 "*"
 *   insn=0x0000000000425730 string=0x0000000000425734 "J"
 *   insn=0x0000000000425734 string=0x0000000000425738 "*"
 *   insn=0x000000000042574C string=0x0000000000425750 ""
 *   insn=0x0000000000425754 string=0x0000000000425758 "A"
 *   insn=0x000000000042575C string=0x0000000000425760 "\t@"
 *   insn=0x000000000042576C string=0x0000000000425770 ""
 *   insn=0x0000000000425774 string=0x0000000000425778 "A"
 *   insn=0x000000000042577C string=0x0000000000425780 "@"
 *   insn=0x0000000000425798 string=0x000000000042579C "5"
 *   insn=0x00000000004257A0 string=0x00000000004257A4 ""
 *   insn=0x00000000004257B0 string=0x00000000004257B4 "\t@"
 *   insn=0x00000000004257C0 string=0x00000000004257C4 ""
 *   insn=0x00000000004257D0 string=0x00000000004257D4 "@"
 *   insn=0x00000000004257E4 string=0x00000000004257E8 "nS"
 *   insn=0x00000000004257E8 string=0x00000000001FA5A0 "0'"
 *   insn=0x00000000004257F4 string=0x00000000001F8A30 "0'"
 *   insn=0x0000000000425820 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000042582C string=0x00000000004258E4 "s"
 *   insn=0x0000000000425830 string=0x0000000000425834 ""
 *   insn=0x0000000000425838 string=0x000000000042583C "A"
 *   insn=0x0000000000425840 string=0x0000000000425844 "\t@"
 *   insn=0x0000000000425850 string=0x0000000000425854 ""
 *   insn=0x0000000000425858 string=0x000000000042585C "A"
 *   insn=0x0000000000425860 string=0x0000000000425864 "@"
 *   insn=0x0000000000425878 string=0x000000000042587C "U"
 *   insn=0x0000000000425880 string=0x0000000000425884 ""
 *   insn=0x0000000000425890 string=0x0000000000425894 "\t@"
 *   insn=0x00000000004258A0 string=0x00000000004258A4 ""
 *   insn=0x00000000004258B0 string=0x00000000004258B4 "@"
 *   insn=0x00000000004258BC string=0x00000000004258C0 "\t"
 *   insn=0x00000000004258C8 string=0x00000000004258CC "yF"
 *   insn=0x00000000004258CC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004258E4 string=0x00000000004258E8 "3"
 *   insn=0x00000000004258E8 string=0x00000000004258EC "h"
 *   insn=0x00000000004258EC string=0x00000000004258F0 ""
 *   insn=0x00000000004258F0 string=0x00000000004258F4 "h"
 *   insn=0x00000000004258F8 string=0x00000000004258FC "h"
 *   insn=0x00000000004258FC string=0x0000000000425900 "\t@"
 *   insn=0x0000000000425908 string=0x000000000042590C "h\n@"
 *   insn=0x000000000042590C string=0x0000000000425910 ""
 *   insn=0x0000000000425910 string=0x0000000000425914 "h\n"
 *   insn=0x0000000000425918 string=0x000000000042591C "h"
 *   insn=0x000000000042591C string=0x0000000000425920 "@"
 *   insn=0x0000000000425954 string=0x0000000000425958 "Y"
 *   insn=0x0000000000425958 string=0x000000000042595C "("
 *   insn=0x0000000000425968 string=0x000000000042596C "v"
 *   insn=0x0000000000425974 string=0x0000000000425A84 "("
 *   insn=0x0000000000425980 string=0x0000000000425984 "?"
 *   insn=0x0000000000425998 string=0x000000000042599C ")"
 *   insn=0x000000000042599C string=0x00000000004259A0 "Iii"
 *   insn=0x00000000004259A4 string=0x00000000004259A8 "|U"
 *   insn=0x00000000004259AC string=0x00000000004259B0 "+"
 *   insn=0x00000000004259B0 string=0x0000000000425A5C "\tiz8"
 *   insn=0x00000000004259B4 string=0x00000000004259B8 ""
 *   insn=0x00000000004259C0 string=0x00000000004259C4 "'r"
 *   insn=0x00000000004259C8 string=0x00000000004259CC "8"
 *   insn=0x00000000004259CC string=0x00000000004259D0 "@"
 *   insn=0x00000000004259D0 string=0x00000000004259D4 ""
 *   insn=0x00000000004259D4 string=0x00000000004259D8 ""
 *   insn=0x00000000004259DC string=0x00000000004259E0 ""
 *   insn=0x00000000004259E4 string=0x00000000004259E8 "\t@"
 *   insn=0x00000000004259EC string=0x00000000004259F0 "@"
 *   insn=0x00000000004259F0 string=0x00000000004259F4 ""
 *   insn=0x00000000004259F4 string=0x00000000004259F8 ""
 *   insn=0x00000000004259FC string=0x0000000000425A00 ""
 *   insn=0x0000000000425A04 string=0x0000000000425A08 "@"
 *   insn=0x0000000000425A14 string=0x0000000000425A18 "h"
 *   insn=0x0000000000425A28 string=0x0000000000425A2C ""
 *   insn=0x0000000000425A2C string=0x0000000000425A30 "(ih"
 *   insn=0x0000000000425A3C string=0x0000000000425A40 "\ta"
 *   insn=0x0000000000425A40 string=0x0000000000425A44 "`"
 *   insn=0x0000000000425A64 string=0x0000000000425A68 "{"
 *   insn=0x0000000000425A68 string=0x0000000000425A6C "Zc"
 *   insn=0x0000000000425A6C string=0x0000000000425A70 ")"
 *   insn=0x0000000000425A70 string=0x0000000000425A74 ")"
 *   insn=0x0000000000425A74 string=0x0000000000425A78 ")}"
 *   insn=0x0000000000425A8C string=0x0000000000425A90 "!"
 *   insn=0x0000000000425A90 string=0x0000000000425AB4 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::MapView::AnimateLocationMarkerFromNodeToNode@<X0>(
        __int64 a1@<X0>,
        __int64 *a2@<X1>,
        __int64 *a3@<X2>,
        Caver::GUIAnimation **a4@<X8>)
{
  __int64 v7; // x9
  __int64 v8; // x10
  _QWORD *v9; // x22
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x9
  _QWORD *v14; // x21
  __int64 v15; // x8
  __int64 v16; // x8
  Caver::GUIAnimation *v17; // x21
  Caver::GUIAnimation *v18; // x22
  Caver::GUIPropertyValue *v19; // x0
  Caver::GUIPropertyValue *v20; // x0
  _QWORD *v21; // x8
  __int64 v22; // x9
  _QWORD *v23; // x21
  __int64 v24; // x8
  __int64 v25; // x8
  _QWORD *v26; // x21
  __int64 v27; // x8
  __int64 v28; // x8
  Caver::GUIAnimation *v29; // x22
  _QWORD *v30; // x8
  __int64 v31; // x9
  _QWORD *v32; // x21
  __int64 v33; // x8
  __int64 v34; // x8
  _QWORD *v35; // x21
  __int64 v36; // x8
  __int64 v37; // x8
  Caver::GUIAnimation *v38; // x8
  Caver::GUIAnimation *v39; // x9
  _QWORD *v40; // x21
  __int64 v41; // x8
  __int64 v42; // x8
  __int64 v43; // x8
  __int64 v44; // x8
  __int64 v46; // [xsp+80h] [xbp-50h] BYREF
  __int64 v47; // [xsp+88h] [xbp-48h]
  _QWORD *v48; // [xsp+90h] [xbp-40h]
  __int64 v49; // [xsp+98h] [xbp-38h]

  v49 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = *a2;
  v7 = a2[1];
  if ( v7 )
    ++*(_QWORD *)(v7 + 8);
  v9 = *(_QWORD **)(a1 + 704);
  *(_QWORD *)(a1 + 696) = v8;
  *(_QWORD *)(a1 + 704) = v7;
  if ( v9 )
  {
    v10 = v9[1] - 1LL;
    v9[1] = v10;
    if ( !v10 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      v11 = v9[2] - 1LL;
      v9[2] = v11;
      if ( !v11 )
        (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
    }
  }
  v13 = *a3;
  v12 = a3[1];
  if ( v12 )
    ++*(_QWORD *)(v12 + 8);
  v14 = *(_QWORD **)(a1 + 720);
  *(_QWORD *)(a1 + 712) = v13;
  *(_QWORD *)(a1 + 720) = v12;
  if ( v14 )
  {
    v15 = v14[1] - 1LL;
    v14[1] = v15;
    if ( !v15 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v16 = v14[2] - 1LL;
      v14[2] = v16;
      if ( !v16 )
        (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
  }
  v17 = (Caver::GUIAnimation *)operator new(0xC0u);
  Caver::GUIAnimation::GUIAnimation(v17);
  *a4 = v17;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>();
  boost::detail::sp_enable_shared_from_this();
  v18 = *a4;
  v20 = (Caver::GUIPropertyValue *)Caver::GUIPropertyValue::ValueWithFloat(&v46, v19, 0.0);
  *((_DWORD *)v18 + 28) = v46;
  v22 = v47;
  v21 = v48;
  if ( v48 )
    ++v48[1];
  v23 = (_QWORD *)*((_QWORD *)v18 + 16);
  *((_QWORD *)v18 + 15) = v22;
  *((_QWORD *)v18 + 16) = v21;
  if ( v23 )
  {
    v24 = v23[1] - 1LL;
    v23[1] = v24;
    if ( !v24 )
    {
      v20 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
      v25 = v23[2] - 1LL;
      v23[2] = v25;
      if ( !v25 )
        v20 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v23 + 24LL))(v23);
    }
  }
  v26 = v48;
  if ( v48 )
  {
    v27 = v48[1] - 1LL;
    v48[1] = v27;
    if ( !v27 )
    {
      v20 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
      v28 = v26[2] - 1LL;
      v26[2] = v28;
      if ( !v28 )
        v20 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
    }
  }
  v29 = *a4;
  Caver::GUIPropertyValue::ValueWithFloat(&v46, v20, 1.0);
  *((_DWORD *)v29 + 34) = v46;
  v31 = v47;
  v30 = v48;
  if ( v48 )
    ++v48[1];
  v32 = (_QWORD *)*((_QWORD *)v29 + 19);
  *((_QWORD *)v29 + 18) = v31;
  *((_QWORD *)v29 + 19) = v30;
  if ( v32 )
  {
    v33 = v32[1] - 1LL;
    v32[1] = v33;
    if ( !v33 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
      v34 = v32[2] - 1LL;
      v32[2] = v34;
      if ( !v34 )
        (*(void (__fastcall **)(_QWORD *))(*v32 + 24LL))(v32);
    }
  }
  v35 = v48;
  if ( v48 )
  {
    v36 = v48[1] - 1LL;
    v48[1] = v36;
    if ( !v36 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
      v37 = v35[2] - 1LL;
      v35[2] = v37;
      if ( !v37 )
        (*(void (__fastcall **)(_QWORD *))(*v35 + 24LL))(v35);
    }
  }
  v38 = *a4;
  *((_BYTE *)v38 + 184) = 1;
  *((_QWORD *)v38 + 11) = 0x3F19999A3E4CCCCDLL;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 280) + 16LL * **(_QWORD **)(a1 + 696)) == *(_QWORD *)(*(_QWORD *)(a1 + 280)
                                                                                        + 16LL * **(_QWORD **)(a1 + 712)) )
  {
    v40 = *(_QWORD **)(a1 + 736);
    *(_QWORD *)(a1 + 728) = 0;
    *(_QWORD *)(a1 + 736) = 0;
    if ( v40 )
    {
      v43 = v40[1] - 1LL;
      v40[1] = v43;
      if ( !v43 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v40 + 16LL))(v40);
        v44 = v40[2] - 1LL;
        v40[2] = v44;
        if ( !v44 )
LABEL_43:
          (*(void (__fastcall **)(_QWORD *))(*v40 + 24LL))(v40);
      }
    }
  }
  else
  {
    v39 = a4[1];
    if ( v39 )
      ++*((_QWORD *)v39 + 1);
    v40 = *(_QWORD **)(a1 + 736);
    *(_QWORD *)(a1 + 728) = v38;
    *(_QWORD *)(a1 + 736) = v39;
    if ( v40 )
    {
      v41 = v40[1] - 1LL;
      v40[1] = v41;
      if ( !v41 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v40 + 16LL))(v40);
        v42 = v40[2] - 1LL;
        v40[2] = v42;
        if ( !v42 )
          goto LABEL_43;
      }
    }
  }
  Caver::GUIView::RemoveAllAnimations(*(Caver::GUIView **)(a1 + 680));
  return Caver::GUIView::AddAnimation();
}

