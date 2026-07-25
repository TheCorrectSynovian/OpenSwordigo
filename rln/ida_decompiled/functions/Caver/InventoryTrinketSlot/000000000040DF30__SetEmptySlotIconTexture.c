/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040DF30
 * Mangled: _ZN5Caver20InventoryTrinketSlot23SetEmptySlotIconTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::InventoryTrinketSlot::SetEmptySlotIconTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x00000000001F42F0  Caver::InventoryTrinketSlot::SetEmptySlotIconTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 11
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6360  Caver::GUITexturedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,bool)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7330  boost::detail::shared_count::shared_count<Caver::GUITexturedRect>(Caver::GUITexturedRect *)
 *   0x00000000001F95E0  Caver::GUITexturedRect::CreateWithBounds(Caver::Rectangle const&,bool)
 *   0x00000000001FD850  Caver::GUITexturedRect::GUITexturedRect(void)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000040E0EC  Caver::InventoryTrinketSlot::LayoutSubviews(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x000000000040DF40 string=0x000000000040DF44 "V"
 *   insn=0x000000000040DF54 string=0x000000000040DF58 "h"
 *   insn=0x000000000040DF58 string=0x000000000040DF5C "H\t"
 *   insn=0x000000000040DF64 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000040DF68 string=0x000000000040DF6C "9"
 *   insn=0x000000000040DF6C string=0x00000000001FD850 "0'"
 *   insn=0x000000000040DF80 string=0x00000000001F7330 "0'"
 *   insn=0x000000000040DF8C string=0x000000000040DF90 "p"
 *   insn=0x000000000040DFA8 string=0x000000000040DFAC "5"
 *   insn=0x000000000040DFB0 string=0x000000000040DFB4 ""
 *   insn=0x000000000040DFC4 string=0x000000000040DFC8 "\t@"
 *   insn=0x000000000040DFD0 string=0x000000000040DFD4 ""
 *   insn=0x000000000040DFE4 string=0x000000000040DFE8 "@"
 *   insn=0x000000000040E004 string=0x000000000040E008 "h"
 *   insn=0x000000000040E004 string=0x00000000001F6360 "0'"
 *   insn=0x000000000040E020 string=0x000000000040E024 " "
 *   insn=0x000000000040E024 string=0x000000000040E028 "A"
 *   insn=0x000000000040E038 string=0x000000000040E03C "}"
 *   insn=0x000000000040E03C string=0x000000000040E040 "h"
 *   insn=0x000000000040E03C string=0x00000000001FDA30 "0'"
 *   insn=0x000000000040E04C string=0x000000000040E050 "AE"
 *   insn=0x000000000040E058 string=0x000000000040E05C "a"
 *   insn=0x000000000040E05C string=0x00000000001F95E0 "0'"
 *   insn=0x000000000040E068 string=0x000000000040E06C "A"
 *   insn=0x000000000040E08C string=0x000000000040E090 "h"
 *   insn=0x000000000040E090 string=0x000000000040E094 ""
 *   insn=0x000000000040E094 string=0x000000000040E098 "h"
 *   insn=0x000000000040E098 string=0x000000000040E09C "!"
 *   insn=0x000000000040E09C string=0x000000000040E0A0 "h"
 *   insn=0x000000000040E0A4 string=0x000000000040E0A8 "\t@"
 *   insn=0x000000000040E0AC string=0x000000000040E0B0 "h\n@"
 *   insn=0x000000000040E0B0 string=0x000000000040E0B4 ""
 *   insn=0x000000000040E0B4 string=0x000000000040E0B8 "h\n"
 *   insn=0x000000000040E0B8 string=0x000000000040E0BC "!"
 *   insn=0x000000000040E0BC string=0x000000000040E0C0 "h"
 *   insn=0x000000000040E0C4 string=0x000000000040E0C8 "@"
 *   insn=0x000000000040E0D4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000040E0DC string=0x000000000040E0E0 "t"
 *   insn=0x000000000040E0E0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::InventoryTrinketSlot::SetEmptySlotIconTexture(__int64 result, __int64 a2)
{
  __int64 v3; // x20
  Caver::GUITexturedRect *v4; // x21
  _QWORD *v5; // x21
  __int64 v6; // x9
  _QWORD *v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  Caver::GUITexturedRect *v10; // x21
  _QWORD *v11; // x8
  _QWORD *v12; // x19
  __int64 v13; // x8
  __int64 v14; // x8
  unsigned __int64 v15; // [xsp+8h] [xbp-48h] BYREF
  __int64 v16; // [xsp+10h] [xbp-40h] BYREF
  __int64 v17; // [xsp+18h] [xbp-38h] BYREF
  _QWORD *v18; // [xsp+20h] [xbp-30h]
  __int64 v19; // [xsp+28h] [xbp-28h]

  v3 = result;
  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)a2 )
  {
    v4 = (Caver::GUITexturedRect *)operator new(0x70u);
    Caver::GUITexturedRect::GUITexturedRect(v4);
    v17 = (__int64)v4;
    boost::detail::shared_count::shared_count<Caver::GUITexturedRect>();
    boost::detail::sp_enable_shared_from_this();
    v5 = *(_QWORD **)(v3 + 312);
    v6 = v17;
    v17 = *(_QWORD *)(v3 + 304);
    v7 = v18;
    *(_QWORD *)(v3 + 304) = v6;
    *(_QWORD *)(v3 + 312) = v7;
    v18 = v5;
    if ( v5 )
    {
      v8 = v5[1] - 1LL;
      v5[1] = v8;
      if ( !v8 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v9 = v5[2] - 1LL;
        v5[2] = v9;
        if ( !v9 )
          (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
    v17 = 0;
    v18 = 0;
    Caver::GUITexturedRect::InitWithTexture();
    v10 = *(Caver::GUITexturedRect **)(v3 + 304);
    v15 = vsub_f32(
            vadd_f32(
              *(float32x2_t *)(v3 + 132),
              vmul_f32(*(float32x2_t *)(v3 + 140), (float32x2_t)0x3F0000003F000000LL)),
            vmul_f32(*(float32x2_t *)(*(_QWORD *)a2 + 84LL), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
    Caver::Vector2::Rounded(&v16, (Caver::Vector2 *)&v15);
    v11 = *(_QWORD **)(*(_QWORD *)a2 + 84LL);
    v17 = v16;
    v18 = v11;
    return Caver::GUITexturedRect::CreateWithBounds(v10, (const Caver::Rectangle *)&v17, 0);
  }
  else
  {
    v12 = *(_QWORD **)(result + 312);
    *(_QWORD *)(result + 304) = 0;
    *(_QWORD *)(result + 312) = 0;
    if ( v12 )
    {
      v13 = v12[1] - 1LL;
      v12[1] = v13;
      if ( !v13 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
        v14 = v12[2] - 1LL;
        v12[2] = v14;
        if ( !v14 )
          return (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
      }
    }
  }
  return result;
}

