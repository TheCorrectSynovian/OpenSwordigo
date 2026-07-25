/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040E4D0
 * Mangled: _ZN5Caver20InventoryTrinketSlot10TouchMovedERKNS_7FWTouchE
 * Demangled: Caver::InventoryTrinketSlot::TouchMoved(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8450  boost::shared_ptr<Caver::DraggableMenuItem>::shared_ptr<Caver::DraggableMenuItem>(Caver::DraggableMenuItem *)
 *   0x00000000001F8BA0  Caver::DraggableMenuItem::InitWithItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001FFB90  Caver::DraggableMenuItem::DraggableMenuItem(void)
 *   0x0000000000200140  Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000040E7E0  boost::shared_ptr<Caver::DraggableMenuItem>::shared_ptr<Caver::DraggableMenuItem>(Caver::DraggableMenuItem *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 65
 *   insn=0x000000000040E4E0 string=0x000000000040E4E4 "V"
 *   insn=0x000000000040E4F8 string=0x000000000040E4FC "i"
 *   insn=0x000000000040E510 string=0x000000000040E514 ""
 *   insn=0x000000000040E514 string=0x000000000040E518 "`"
 *   insn=0x000000000040E530 string=0x000000000040E534 "M"
 *   insn=0x000000000040E538 string=0x000000000040E53C ")"
 *   insn=0x000000000040E53C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000040E550 string=0x000000000040E554 "h"
 *   insn=0x000000000040E550 string=0x00000000001F8450 "0'"
 *   insn=0x000000000040E558 string=0x000000000040E55C "\t!P"
 *   insn=0x000000000040E564 string=0x000000000040E568 "\t"
 *   insn=0x000000000040E568 string=0x000000000040E56C ")"
 *   insn=0x000000000040E56C string=0x000000000040E570 "\t"
 *   insn=0x000000000040E578 string=0x00000000001F8BA0 "0'"
 *   insn=0x000000000040E57C string=0x000000000040E580 "5"
 *   insn=0x000000000040E580 string=0x000000000040E5C4 "h"
 *   insn=0x000000000040E584 string=0x000000000040E588 ""
 *   insn=0x000000000040E594 string=0x000000000040E598 "\t@"
 *   insn=0x000000000040E5A4 string=0x000000000040E5A8 ""
 *   insn=0x000000000040E5B4 string=0x000000000040E5B8 "@"
 *   insn=0x000000000040E5C8 string=0x000000000040E5CC "M@"
 *   insn=0x000000000040E5D4 string=0x000000000040E5D8 "*"
 *   insn=0x000000000040E5D8 string=0x000000000040E5DC "J"
 *   insn=0x000000000040E5DC string=0x000000000040E5E0 "*"
 *   insn=0x000000000040E5F4 string=0x000000000040E5F8 "4"
 *   insn=0x000000000040E5F8 string=0x000000000040E63C "`~@"
 *   insn=0x000000000040E5FC string=0x000000000040E600 ""
 *   insn=0x000000000040E60C string=0x000000000040E610 "\t@"
 *   insn=0x000000000040E61C string=0x000000000040E620 ""
 *   insn=0x000000000040E62C string=0x000000000040E630 "@"
 *   insn=0x000000000040E640 string=0x000000000040E644 ""
 *   insn=0x000000000040E644 string=0x000000000040E648 ""
 *   insn=0x000000000040E654 string=0x000000000040E658 "3"
 *   insn=0x000000000040E658 string=0x000000000040E65C "h"
 *   insn=0x000000000040E65C string=0x000000000040E660 ""
 *   insn=0x000000000040E660 string=0x000000000040E664 "h"
 *   insn=0x000000000040E668 string=0x000000000040E66C "h"
 *   insn=0x000000000040E670 string=0x000000000040E674 "\t@"
 *   insn=0x000000000040E678 string=0x000000000040E67C "h\n@"
 *   insn=0x000000000040E67C string=0x000000000040E680 ""
 *   insn=0x000000000040E680 string=0x000000000040E684 "h\n"
 *   insn=0x000000000040E688 string=0x000000000040E68C "h"
 *   insn=0x000000000040E690 string=0x000000000040E694 "@"
 *   insn=0x000000000040E6C0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000040E6D0 string=0x000000000040E6D4 "t"
 *   insn=0x000000000040E6D4 string=0x000000000040E6D8 ":"
 *   insn=0x000000000040E6E8 string=0x000000000040E6EC ""
 *   insn=0x000000000040E6F0 string=0x000000000040E6F4 "!"
 *   insn=0x000000000040E6F8 string=0x000000000040E6FC "\t@"
 *   insn=0x000000000040E708 string=0x000000000040E70C ""
 *   insn=0x000000000040E710 string=0x000000000040E714 "!"
 *   insn=0x000000000040E718 string=0x000000000040E71C "@"
 *   insn=0x000000000040E730 string=0x000000000040E734 "4"
 *   insn=0x000000000040E738 string=0x000000000040E73C ""
 *   insn=0x000000000040E748 string=0x000000000040E74C "\t@"
 *   insn=0x000000000040E758 string=0x000000000040E75C ""
 *   insn=0x000000000040E768 string=0x000000000040E76C "@"
 *   insn=0x000000000040E778 string=0x000000000040E77C "4"
 *   insn=0x000000000040E780 string=0x000000000040E784 ""
 *   insn=0x000000000040E790 string=0x000000000040E794 "\t@"
 *   insn=0x000000000040E7A0 string=0x000000000040E7A4 ""
 *   insn=0x000000000040E7B0 string=0x000000000040E7B4 "@"
 *   insn=0x000000000040E7C0 string=0x000000000040E7C4 "@"
 *   insn=0x000000000040E7D4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000040E7D8 string=0x000000000040E7DC ":"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::InventoryTrinketSlot::TouchMoved(__int64 *this, const Caver::FWTouch *a2)
{
  float32x2_t *v3; // x19
  float32x2_t v4; // d0
  Caver::DraggableMenuItem *v5; // x0
  unsigned __int64 v6; // x8
  _QWORD *v7; // x8
  __int64 v8; // x9
  _QWORD *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x8
  void (__fastcall *v12)(float32x2_t *, const Caver::FWTouch *, __int64 *); // x8
  _QWORD *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x8
  _QWORD *v16; // x19
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // [xsp+0h] [xbp-50h] BYREF
  _QWORD *v20; // [xsp+8h] [xbp-48h]
  __int64 v21; // [xsp+10h] [xbp-40h]
  _QWORD *v22; // [xsp+18h] [xbp-38h]
  float32x2_t v23[2]; // [xsp+20h] [xbp-30h] BYREF

  v3 = (float32x2_t *)this;
  v23[1] = *(float32x2_t *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)a2 == this[41] )
  {
    this = Caver::FWTouch::LocationInView((__int64 *)v23, a2, (const Caver::GUIView *)this);
    v4.n64_u64[0] = vsub_f32(v3[42], v23[0]).n64_u64[0];
    if ( vaddv_f32(vmul_f32(v4, v4)) > 25.0 )
    {
      v5 = (Caver::DraggableMenuItem *)operator new(0x180u);
      Caver::DraggableMenuItem::DraggableMenuItem(v5);
      boost::shared_ptr<Caver::DraggableMenuItem>::shared_ptr<Caver::DraggableMenuItem>();
      v6 = v3[34].n64_u64[0];
      v8 = *(_QWORD *)(v6 + 256);
      v7 = *(_QWORD **)(v6 + 264);
      v19 = v8;
      v20 = v7;
      if ( v7 )
        ++v7[1];
      Caver::DraggableMenuItem::InitWithItem();
      v9 = v20;
      if ( v20 )
      {
        v10 = v20[1] - 1LL;
        v20[1] = v10;
        if ( !v10 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
          v11 = v9[2] - 1LL;
          v9[2] = v11;
          if ( !v11 )
            (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
        }
      }
      v12 = *(void (__fastcall **)(float32x2_t *, const Caver::FWTouch *, __int64 *))(v3->n64_u64[0] + 152);
      v19 = v21;
      v20 = v22;
      if ( v22 )
        ++v22[1];
      v12(v3, a2, &v19);
      v13 = v20;
      if ( v20 )
      {
        v14 = v20[1] - 1LL;
        v20[1] = v14;
        if ( !v14 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
          v15 = v13[2] - 1LL;
          v13[2] = v15;
          if ( !v15 )
            (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
        }
      }
      this = (__int64 *)v3[31].n64_u64[0];
      if ( this )
        this = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, float32x2_t *))*this)(this, v3);
      v16 = v22;
      if ( v22 )
      {
        v17 = v22[1] - 1LL;
        v22[1] = v17;
        if ( !v17 )
        {
          this = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
          v18 = v16[2] - 1LL;
          v16[2] = v18;
          if ( !v18 )
            return (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
        }
      }
    }
  }
  return this;
}

