/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049F4C0
 * Mangled: _ZN5Caver7GUIView14LayoutSubviewsEv
 * Demangled: Caver::GUIView::LayoutSubviews(void)
 *
 * Callers: 1
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 26
 *   insn=0x000000000049F4D8 string=0x000000000049F4DC "S"
 *   insn=0x000000000049F4DC string=0x000000000049F4E0 "h"
 *   insn=0x000000000049F4F0 string=0x000000000049F4F4 " "
 *   insn=0x000000000049F4F4 string=0x000000000049F598 "h"
 *   insn=0x000000000049F508 string=0x000000000049F50C "\np@"
 *   insn=0x000000000049F50C string=0x000000000049F510 ""
 *   insn=0x000000000049F510 string=0x000000000049F514 "\t"
 *   insn=0x000000000049F514 string=0x000000000049F518 "_"
 *   insn=0x000000000049F518 string=0x000000000049F51C "+"
 *   insn=0x000000000049F51C string=0x000000000049F520 ""
 *   insn=0x000000000049F520 string=0x000000000049F524 "\t"
 *   insn=0x000000000049F524 string=0x000000000049F528 "h"
 *   insn=0x000000000049F52C string=0x000000000049F548 ""
 *   insn=0x000000000049F530 string=0x000000000049F534 "\n"
 *   insn=0x000000000049F534 string=0x000000000049F538 ""
 *   insn=0x000000000049F548 string=0x000000000049F54C "\n"
 *   insn=0x000000000049F55C string=0x000000000049F560 "\tt"
 *   insn=0x000000000049F564 string=0x000000000049F568 "m"
 *   insn=0x000000000049F568 string=0x000000000049F56C "|"
 *   insn=0x000000000049F56C string=0x000000000049F570 "L"
 *   insn=0x000000000049F570 string=0x000000000049F574 "\t"
 *   insn=0x000000000049F574 string=0x000000000049F578 "\n@H"
 *   insn=0x000000000049F578 string=0x000000000049F57C ")}@"
 *   insn=0x000000000049F584 string=0x000000000049F588 " "
 *   insn=0x000000000049F5A4 string=0x000000000049F5C4 "C["
 *   insn=0x000000000049F5C4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::LayoutSubviews(__int64 this)
{
  _QWORD *v1; // x20
  _QWORD *v2; // x21
  int *v3; // x22
  __int64 v4; // x23
  int *v5; // x24
  int *v6; // x25
  int v7; // w10
  int *v8; // x8
  int *v9; // x11
  int v10; // w9
  int v11; // w8
  _DWORD *v12; // x10
  _DWORD *v13; // x11
  int *v14; // x12
  int *v15; // x13
  int v16; // w13
  int v17; // w12
  __int64 (__fastcall *v18)(__int64, __int64 *); // x9
  __int64 v19; // [xsp+8h] [xbp-58h] BYREF
  int v20; // [xsp+10h] [xbp-50h]
  int v21; // [xsp+14h] [xbp-4Ch]
  __int64 v22; // [xsp+18h] [xbp-48h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (_QWORD *)(this + 32);
  v2 = *(_QWORD **)(this + 32);
  if ( (_QWORD *)(this + 32) != v2 )
  {
    v3 = (int *)(this + 132);
    v4 = this + 140;
    v5 = (int *)(this + 136);
    v6 = (int *)(this + 144);
    while ( 1 )
    {
      this = v2[2];
      v7 = *(_DWORD *)(this + 112);
      v8 = (int *)(this + 116);
      v9 = (int *)((v7 & 2) != 0 ? v4 : this + 124);
      if ( (v7 & 2) != 0 )
        v8 = v3;
      v10 = *v8;
      v11 = *v9;
      if ( (v7 & 0x10) != 0 )
        break;
      if ( (v7 & 2) != 0 )
      {
        v12 = (_DWORD *)(this + 128);
        v13 = (_DWORD *)(this + 120);
        v14 = (int *)(this + 128);
        v15 = (int *)(this + 120);
LABEL_12:
        v16 = *v15;
        v17 = *v14;
        *(_DWORD *)(this + 116) = v10;
        *v13 = v16;
        *(_DWORD *)(this + 124) = v11;
        *v12 = v17;
        v18 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)this + 248LL);
        v19 = *(_QWORD *)(this + 132);
        v20 = v11;
        v21 = v17;
        this = v18(this, &v19);
      }
      v2 = (_QWORD *)*v2;
      if ( v1 == v2 )
        return this;
    }
    v13 = (_DWORD *)(this + 120);
    v12 = (_DWORD *)(this + 128);
    v14 = v6;
    v15 = v5;
    goto LABEL_12;
  }
  return this;
}

