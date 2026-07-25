/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000345148
 * Mangled: _ZN5Caver22GameMenuViewController29InventoryViewTrinketDidChangeEPNS_13InventoryViewENS_21InventoryViewItemTypeE
 * Demangled: Caver::GameMenuViewController::InventoryViewTrinketDidChange(Caver::InventoryView *,Caver::InventoryViewItemType)
 *
 * Callers: 1
 *   0x00000000001FF790  Caver::GameMenuViewController::InventoryViewTrinketDidChange(Caver::InventoryView *,Caver::InventoryViewItemType)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FE7B0  Caver::GameEvent::SendEvent(Caver::GameEvent*)
 *   0x00000000001FF790  Caver::GameMenuViewController::InventoryViewTrinketDidChange(Caver::InventoryView *,Caver::InventoryViewItemType)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 165
 *   insn=0x0000000000345158 string=0x000000000034515C "D@"
 *   insn=0x0000000000345164 string=0x0000000000345168 "UH"
 *   insn=0x0000000000345168 string=0x000000000034516C "u"
 *   insn=0x0000000000345174 string=0x0000000000345178 ")"
 *   insn=0x0000000000345180 string=0x0000000000345184 "\t@"
 *   insn=0x000000000034518C string=0x0000000000345190 ""
 *   insn=0x0000000000345194 string=0x0000000000345198 "!"
 *   insn=0x00000000003451A0 string=0x00000000003451A4 "@"
 *   insn=0x00000000003451B0 string=0x00000000003451B4 "?"
 *   insn=0x00000000003451B4 string=0x00000000003452B0 "h"
 *   insn=0x00000000003451C8 string=0x00000000003451CC "t&"
 *   insn=0x00000000003451C8 string=0x0000000000345240 "h"
 *   insn=0x00000000003451CC string=0x00000000003451D0 "h"
 *   insn=0x00000000003451D0 string=0x00000000003451D4 ""
 *   insn=0x00000000003451D4 string=0x00000000003451D8 ""
 *   insn=0x00000000003451D8 string=0x00000000003451DC ""
 *   insn=0x00000000003451DC string=0x00000000003451E0 "QP"
 *   insn=0x00000000003451E8 string=0x00000000003451EC ")"
 *   insn=0x0000000000345204 string=0x0000000000345208 "J"
 *   insn=0x0000000000345208 string=0x0000000000345550 "4"
 *   insn=0x000000000034520C string=0x0000000000345210 "\t@"
 *   insn=0x000000000034521C string=0x0000000000345220 ""
 *   insn=0x0000000000345224 string=0x0000000000345228 "A"
 *   insn=0x000000000034522C string=0x0000000000345230 "@"
 *   insn=0x0000000000345240 string=0x0000000000345244 "\t@"
 *   insn=0x0000000000345244 string=0x0000000000345248 ""
 *   insn=0x0000000000345248 string=0x000000000034524C ""
 *   insn=0x000000000034524C string=0x0000000000345250 "QP"
 *   insn=0x0000000000345258 string=0x000000000034525C ")"
 *   insn=0x0000000000345278 string=0x0000000000345328 "4"
 *   insn=0x000000000034527C string=0x0000000000345280 "\t@"
 *   insn=0x000000000034528C string=0x0000000000345290 ""
 *   insn=0x000000000034529C string=0x00000000003452A0 "@"
 *   insn=0x00000000003452B0 string=0x00000000003452B4 ""
 *   insn=0x00000000003452B4 string=0x00000000003452B8 ""
 *   insn=0x00000000003452B8 string=0x00000000003452BC ""
 *   insn=0x00000000003452BC string=0x00000000003452C0 "QP"
 *   insn=0x00000000003452C8 string=0x00000000003452CC ")"
 *   insn=0x00000000003452E8 string=0x000000000034543C "4"
 *   insn=0x00000000003452EC string=0x00000000003452F0 "\t@"
 *   insn=0x00000000003452FC string=0x0000000000345300 ""
 *   insn=0x000000000034530C string=0x0000000000345310 "@"
 *   insn=0x0000000000345318 string=0x000000000034531C "H"
 *   insn=0x0000000000345328 string=0x000000000034536C "w"
 *   insn=0x000000000034532C string=0x0000000000345330 ""
 *   insn=0x0000000000345340 string=0x0000000000345344 "\t@"
 *   insn=0x000000000034534C string=0x0000000000345350 ""
 *   insn=0x0000000000345360 string=0x0000000000345364 "@"
 *   insn=0x000000000034536C string=0x0000000000345370 "h"
 *   insn=0x0000000000345370 string=0x0000000000345374 "\t@"
 *   insn=0x0000000000345374 string=0x0000000000345378 ""
 *   insn=0x0000000000345378 string=0x000000000034537C ""
 *   insn=0x000000000034537C string=0x0000000000345380 "QP"
 *   insn=0x0000000000345388 string=0x000000000034538C ")\t"
 *   insn=0x0000000000345398 string=0x000000000034539C "3"
 *   insn=0x000000000034539C string=0x00000000003453A0 "h"
 *   insn=0x000000000034539C string=0x00000000003453E0 "4"
 *   insn=0x00000000003453A0 string=0x00000000003453A4 ""
 *   insn=0x00000000003453A4 string=0x00000000003453A8 "h"
 *   insn=0x00000000003453AC string=0x00000000003453B0 "h"
 *   insn=0x00000000003453B0 string=0x00000000003453B4 "\t@"
 *   insn=0x00000000003453BC string=0x00000000003453C0 "h\n@"
 *   insn=0x00000000003453C0 string=0x00000000003453C4 ""
 *   insn=0x00000000003453C4 string=0x00000000003453C8 "h\n"
 *   insn=0x00000000003453CC string=0x00000000003453D0 "h"
 *   insn=0x00000000003453D0 string=0x00000000003453D4 "@"
 *   insn=0x00000000003453E4 string=0x00000000003453E8 ""
 *   insn=0x00000000003453F8 string=0x00000000003453FC "\t@"
 *   insn=0x0000000000345404 string=0x0000000000345408 ""
 *   insn=0x0000000000345418 string=0x000000000034541C "@"
 *   insn=0x0000000000345424 string=0x0000000000345428 "n"
 *   insn=0x0000000000345428 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000345430 string=0x0000000000345658 ""
 *   insn=0x0000000000345440 string=0x0000000000345444 ""
 *   insn=0x0000000000345454 string=0x0000000000345458 "\t@"
 *   insn=0x0000000000345460 string=0x0000000000345464 ""
 *   insn=0x0000000000345474 string=0x0000000000345478 "@"
 *   insn=0x0000000000345480 string=0x0000000000345484 "h"
 *   insn=0x0000000000345484 string=0x0000000000345488 ""
 *   insn=0x0000000000345488 string=0x000000000034548C ""
 *   insn=0x000000000034548C string=0x0000000000345490 ""
 *   insn=0x0000000000345490 string=0x0000000000345494 "QP"
 *   insn=0x000000000034549C string=0x00000000003454A0 ")\t"
 *   insn=0x00000000003454AC string=0x00000000003454B0 "3"
 *   insn=0x00000000003454B0 string=0x00000000003454B4 "h"
 *   insn=0x00000000003454B0 string=0x00000000003454F4 "4"
 *   insn=0x00000000003454B4 string=0x00000000003454B8 ""
 *   insn=0x00000000003454B8 string=0x00000000003454BC "h"
 *   insn=0x00000000003454C0 string=0x00000000003454C4 "h"
 *   insn=0x00000000003454C4 string=0x00000000003454C8 "\t@"
 *   insn=0x00000000003454D0 string=0x00000000003454D4 "h\n@"
 *   insn=0x00000000003454D4 string=0x00000000003454D8 ""
 *   insn=0x00000000003454D8 string=0x00000000003454DC "h\n"
 *   insn=0x00000000003454E0 string=0x00000000003454E4 "h"
 *   insn=0x00000000003454E4 string=0x00000000003454E8 "@"
 *   insn=0x00000000003454F8 string=0x00000000003454FC ""
 *   insn=0x000000000034550C string=0x0000000000345510 "\t@"
 *   insn=0x0000000000345518 string=0x000000000034551C ""
 *   insn=0x000000000034552C string=0x0000000000345530 "@"
 *   insn=0x0000000000345538 string=0x000000000034553C ")"
 *   insn=0x0000000000345540 string=0x0000000000345544 "E"
 *   insn=0x0000000000345550 string=0x0000000000345594 "7"
 *   insn=0x0000000000345554 string=0x0000000000345558 ""
 *   insn=0x0000000000345568 string=0x000000000034556C "\t@"
 *   insn=0x0000000000345574 string=0x0000000000345578 ""
 *   insn=0x0000000000345588 string=0x000000000034558C "@"
 *   insn=0x0000000000345594 string=0x0000000000345598 "h"
 *   insn=0x0000000000345598 string=0x000000000034559C ""
 *   insn=0x000000000034559C string=0x00000000003455A0 ""
 *   insn=0x00000000003455A0 string=0x00000000003455A4 ""
 *   insn=0x00000000003455A4 string=0x00000000003455A8 "QP"
 *   insn=0x00000000003455B0 string=0x00000000003455B4 ")\t"
 *   insn=0x00000000003455C0 string=0x00000000003455C4 "3"
 *   insn=0x00000000003455C4 string=0x00000000003455C8 "h"
 *   insn=0x00000000003455C4 string=0x0000000000345608 "4"
 *   insn=0x00000000003455C8 string=0x00000000003455CC ""
 *   insn=0x00000000003455CC string=0x00000000003455D0 "h"
 *   insn=0x00000000003455D4 string=0x00000000003455D8 "h"
 *   insn=0x00000000003455D8 string=0x00000000003455DC "\t@"
 *   insn=0x00000000003455E4 string=0x00000000003455E8 "h\n@"
 *   insn=0x00000000003455E8 string=0x00000000003455EC ""
 *   insn=0x00000000003455EC string=0x00000000003455F0 "h\n"
 *   insn=0x00000000003455F4 string=0x00000000003455F8 "h"
 *   insn=0x00000000003455F8 string=0x00000000003455FC "@"
 *   insn=0x000000000034560C string=0x0000000000345610 ""
 *   insn=0x0000000000345620 string=0x0000000000345624 "\t@"
 *   insn=0x000000000034562C string=0x0000000000345630 ""
 *   insn=0x0000000000345640 string=0x0000000000345644 "@"
 *   insn=0x0000000000345668 string=0x000000000034566C " "
 *   insn=0x000000000034567C string=0x0000000000345680 " "
 *   insn=0x0000000000345690 string=0x0000000000345694 "G"
 *   insn=0x00000000003456B4 string=0x00000000003456B8 ""
 *   insn=0x00000000003456C4 string=0x00000000003456C8 "\t@"
 *   insn=0x00000000003456D4 string=0x00000000003456D8 ""
 *   insn=0x00000000003456E4 string=0x00000000003456E8 "@"
 *   insn=0x00000000003456F0 string=0x00000000003456F4 "_"
 *   insn=0x0000000000345700 string=0x0000000000345704 ""
 *   insn=0x0000000000345708 string=0x000000000034570C "!"
 *   insn=0x0000000000345710 string=0x0000000000345714 "\t@"
 *   insn=0x0000000000345720 string=0x0000000000345724 ""
 *   insn=0x0000000000345728 string=0x000000000034572C "!\n"
 *   insn=0x0000000000345730 string=0x0000000000345734 "@"
 *   insn=0x000000000034573C string=0x0000000000345740 "L"
 *   insn=0x0000000000345744 string=0x0000000000345748 "T\t"
 *   insn=0x000000000034574C string=0x0000000000345750 ""
 *   insn=0x000000000034575C string=0x0000000000345760 "\t@"
 *   insn=0x000000000034576C string=0x0000000000345770 ""
 *   insn=0x000000000034577C string=0x0000000000345780 "@"
 *   insn=0x0000000000345788 string=0x000000000034578C "9"
 *   insn=0x0000000000345798 string=0x000000000034579C ""
 *   insn=0x00000000003457A0 string=0x00000000003457A4 "a"
 *   insn=0x00000000003457A8 string=0x00000000003457AC "\t@"
 *   insn=0x00000000003457B8 string=0x00000000003457BC ""
 *   insn=0x00000000003457C0 string=0x00000000003457C4 "a"
 *   insn=0x00000000003457C8 string=0x00000000003457CC "@"
 *   insn=0x00000000003457D4 string=0x00000000003457D8 "&"
 *   insn=0x00000000003457E4 string=0x00000000003457E8 ""
 *   insn=0x00000000003457F4 string=0x00000000003457F8 "\t@"
 *   insn=0x0000000000345804 string=0x0000000000345808 ""
 *   insn=0x0000000000345814 string=0x0000000000345818 "@"
 *   insn=0x0000000000345828 string=0x000000000034582C "4"
 *   insn=0x0000000000345830 string=0x0000000000345834 ""
 *   insn=0x0000000000345840 string=0x0000000000345844 "\t@"
 *   insn=0x0000000000345850 string=0x0000000000345854 ""
 *   insn=0x0000000000345860 string=0x0000000000345864 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameMenuViewController::InventoryViewTrinketDidChange(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // x8
  _QWORD *v6; // x21
  _QWORD *v7; // x22
  __int64 v8; // x8
  __int64 v9; // x8
  _QWORD *v10; // x20
  __int64 v11; // x9
  _QWORD *v12; // x21
  _BOOL4 v13; // w23
  __int64 v14; // x8
  __int64 v15; // x8
  _QWORD *v16; // x20
  __int64 v17; // x9
  _QWORD *v18; // x21
  _BOOL4 v19; // w23
  __int64 v20; // x8
  __int64 v21; // x8
  _QWORD *v22; // x20
  __int64 v23; // x9
  _QWORD *v24; // x21
  _BOOL4 v25; // w23
  __int64 v26; // x8
  __int64 v27; // x8
  __int64 v28; // x8
  __int64 v29; // x8
  _QWORD *v30; // x20
  _QWORD *v31; // x19
  __int64 v32; // x8
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v35; // x8
  Caver::GameEvent *v36; // x0
  Caver::GameEvent *v37; // x1
  int v38; // w8
  __int64 v39; // x8
  __int64 v40; // x8
  __int64 v41; // x8
  _QWORD *v42; // x20
  _QWORD *v43; // x19
  __int64 v44; // x8
  __int64 v45; // x8
  __int64 v46; // x8
  __int64 v47; // x8
  __int64 v48; // x8
  __int64 v49; // x8
  __int64 v50; // x8
  _QWORD *v51; // x20
  _QWORD *v52; // x19
  __int64 v53; // x8
  __int64 v54; // x8
  __int64 v55; // x8
  __int64 v56; // x8

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 128LL);
  v6 = *(_QWORD **)(*(_QWORD *)(a1 + 136) + 136LL);
  if ( !v6 )
  {
    v7 = (_QWORD *)(v5 + 16);
    goto LABEL_7;
  }
  v7 = (_QWORD *)(v5 + 16);
  if ( v6[1]
    || ((*(void (__fastcall **)(_QWORD))(*v6 + 16LL))(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL)),
        v8 = v6[2] - 1LL,
        (v6[2] = v8) != 0) )
  {
LABEL_7:
    if ( a3 == 2 )
      goto LABEL_22;
    goto LABEL_8;
  }
  (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
  if ( a3 == 2 )
  {
LABEL_22:
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 304) + 32LL) + 304LL) + 272LL) + 256LL);
    v22 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 304) + 32LL) + 304LL) + 272LL) + 264LL);
    if ( v22 )
      ++v22[1];
    v23 = v7[17];
    v24 = (_QWORD *)v7[18];
    if ( v24 )
    {
      v25 = v21 != v23;
      if ( !v24[1] )
      {
        (*(void (__fastcall **)(_QWORD))(*v24 + 16LL))(v7[18]);
        v26 = v24[2] - 1LL;
        v24[2] = v26;
        if ( !v26 )
          (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
      }
    }
    else
    {
      v25 = v21 != v23;
    }
    if ( v22 )
    {
      v39 = v22[1] - 1LL;
      v22[1] = v39;
      if ( !v39 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
        v40 = v22[2] - 1LL;
        v22[2] = v40;
        if ( !v40 )
          (*(void (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
      }
    }
    if ( v25 )
    {
      v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 304) + 32LL) + 304LL) + 272LL) + 256LL);
      v42 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 304) + 32LL) + 304LL) + 272LL) + 264LL);
      if ( v42 )
        v42[1] += 2LL;
      v43 = (_QWORD *)v7[18];
      v7[17] = v41;
      v7[18] = v42;
      if ( v43 )
      {
        v44 = v43[1] - 1LL;
        v43[1] = v44;
        if ( !v44 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v43 + 16LL))(v43);
          v45 = v43[2] - 1LL;
          v43[2] = v45;
          if ( !v45 )
            (*(void (__fastcall **)(_QWORD *))(*v43 + 24LL))(v43);
        }
      }
      if ( v42 )
      {
        v46 = v42[1] - 1LL;
        v42[1] = v46;
        if ( !v46 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v42 + 16LL))(v42);
          v47 = v42[2] - 1LL;
          v42[2] = v47;
          if ( !v47 )
            (*(void (__fastcall **)(_QWORD *))(*v42 + 24LL))(v42);
        }
      }
      v36 = (Caver::GameEvent *)operator new(0x68u);
      v38 = 14;
LABEL_79:
      *(_DWORD *)v36 = v38;
      *((_QWORD *)v36 + 3) = 0;
      *((_QWORD *)v36 + 6) = 0;
      *((_QWORD *)v36 + 2) = 0;
      *((_QWORD *)v36 + 4) = (char *)v36 + 16;
      *((_QWORD *)v36 + 5) = (char *)v36 + 16;
      *((_QWORD *)v36 + 9) = 0;
      *((_QWORD *)v36 + 12) = 0;
      *((_QWORD *)v36 + 8) = 0;
      *((_QWORD *)v36 + 10) = (char *)v36 + 64;
      *((_QWORD *)v36 + 11) = (char *)v36 + 64;
      Caver::GameEvent::SendEvent(v36, v37);
      return;
    }
    return;
  }
LABEL_8:
  if ( a3 == 1 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 304) + 16LL) + 304LL) + 272LL) + 256LL);
    v16 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 304) + 16LL) + 304LL) + 272LL) + 264LL);
    if ( v16 )
      ++v16[1];
    v17 = v7[15];
    v18 = (_QWORD *)v7[16];
    if ( v18 )
    {
      v19 = v15 != v17;
      if ( !v18[1] )
      {
        (*(void (__fastcall **)(_QWORD))(*v18 + 16LL))(v7[16]);
        v20 = v18[2] - 1LL;
        v18[2] = v20;
        if ( !v20 )
          (*(void (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
      }
    }
    else
    {
      v19 = v15 != v17;
    }
    if ( v16 )
    {
      v27 = v16[1] - 1LL;
      v16[1] = v27;
      if ( !v27 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
        v28 = v16[2] - 1LL;
        v16[2] = v28;
        if ( !v28 )
          (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
      }
    }
    if ( v19 )
    {
      v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 304) + 16LL) + 304LL) + 272LL) + 256LL);
      v30 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 304) + 16LL) + 304LL) + 272LL) + 264LL);
      if ( v30 )
        v30[1] += 2LL;
      v31 = (_QWORD *)v7[16];
      v7[15] = v29;
      v7[16] = v30;
      if ( v31 )
      {
        v32 = v31[1] - 1LL;
        v31[1] = v32;
        if ( !v32 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
          v33 = v31[2] - 1LL;
          v31[2] = v33;
          if ( !v33 )
            (*(void (__fastcall **)(_QWORD *))(*v31 + 24LL))(v31);
        }
      }
      if ( v30 )
      {
        v34 = v30[1] - 1LL;
        v30[1] = v34;
        if ( !v34 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
          v35 = v30[2] - 1LL;
          v30[2] = v35;
          if ( !v35 )
            (*(void (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
        }
      }
      v36 = (Caver::GameEvent *)operator new(0x68u);
      v38 = 13;
      goto LABEL_79;
    }
  }
  else if ( !a3 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a2 + 304) + 304LL) + 272LL) + 256LL);
    v10 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a2 + 304) + 304LL) + 272LL) + 264LL);
    if ( v10 )
      ++v10[1];
    v11 = v7[13];
    v12 = (_QWORD *)v7[14];
    if ( v12 )
    {
      v13 = v9 != v11;
      if ( !v12[1] )
      {
        (*(void (__fastcall **)(_QWORD))(*v12 + 16LL))(v7[14]);
        v14 = v12[2] - 1LL;
        v12[2] = v14;
        if ( !v14 )
          (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
      }
    }
    else
    {
      v13 = v9 != v11;
    }
    if ( v10 )
    {
      v48 = v10[1] - 1LL;
      v10[1] = v48;
      if ( !v48 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
        v49 = v10[2] - 1LL;
        v10[2] = v49;
        if ( !v49 )
          (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
      }
    }
    if ( v13 )
    {
      v50 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a2 + 304) + 304LL) + 272LL) + 256LL);
      v51 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a2 + 304) + 304LL) + 272LL) + 264LL);
      if ( v51 )
        v51[1] += 2LL;
      v52 = (_QWORD *)v7[14];
      v7[13] = v50;
      v7[14] = v51;
      if ( v52 )
      {
        v53 = v52[1] - 1LL;
        v52[1] = v53;
        if ( !v53 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v52 + 16LL))(v52);
          v54 = v52[2] - 1LL;
          v52[2] = v54;
          if ( !v54 )
            (*(void (__fastcall **)(_QWORD *))(*v52 + 24LL))(v52);
        }
      }
      if ( v51 )
      {
        v55 = v51[1] - 1LL;
        v51[1] = v55;
        if ( !v55 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v51 + 16LL))(v51);
          v56 = v51[2] - 1LL;
          v51[2] = v56;
          if ( !v56 )
            (*(void (__fastcall **)(_QWORD *))(*v51 + 24LL))(v51);
        }
      }
      v36 = (Caver::GameEvent *)operator new(0x68u);
      v38 = 12;
      goto LABEL_79;
    }
  }
}

