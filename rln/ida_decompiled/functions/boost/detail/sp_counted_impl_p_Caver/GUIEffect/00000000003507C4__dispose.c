/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003507C4
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver9GUIEffectEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GUIEffect>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000350898  boost::detail::sp_counted_impl_p<Caver::GUIEffect>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 22
 *   insn=0x00000000003507D4 string=0x00000000003507D8 "`6@"
 *   insn=0x00000000003507D8 string=0x00000000003507DC "@"
 *   insn=0x00000000003507DC string=0x00000000003507E4 "h"
 *   insn=0x00000000003507E0 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000003507E4 string=0x00000000003507E8 "H"
 *   insn=0x00000000003507E8 string=0x00000000003507EC ""
 *   insn=0x00000000003507E8 string=0x0000000000350810 "`\n@"
 *   insn=0x00000000003507EC string=0x00000000003507F0 ""
 *   insn=0x00000000003507F0 string=0x00000000003507F4 ""
 *   insn=0x00000000003507F8 string=0x00000000003507FC "`"
 *   insn=0x0000000000350814 string=0x0000000000350818 "@"
 *   insn=0x0000000000350818 string=0x000000000035081C ""
 *   insn=0x000000000035081C string=0x0000000000350820 ""
 *   insn=0x0000000000350824 string=0x0000000000350828 ""
 *   insn=0x0000000000350828 string=0x000000000035082C "@"
 *   insn=0x0000000000350840 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000350858 string=0x000000000035085C "\t\t@"
 *   insn=0x000000000035085C string=0x0000000000350860 ")"
 *   insn=0x0000000000350860 string=0x0000000000350864 "\t\t"
 *   insn=0x0000000000350868 string=0x000000000035086C "\t"
 *   insn=0x000000000035086C string=0x0000000000350870 ")@"
 *   insn=0x0000000000350874 string=0x0000000000350878 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::GUIEffect>::dispose(__int64 a1)
{
  _QWORD *v1; // x19
  void *v2; // x0
  __int64 v3; // x8
  void (__fastcall *v4)(_QWORD *, _QWORD *, __int64); // x8
  _QWORD *v5; // x0
  __int64 v6; // x8

  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v2 = (void *)v1[13];
    if ( v2 )
      operator delete[](v2);
    v3 = v1[3];
    if ( v3 )
    {
      if ( (v3 & 1) == 0 )
      {
        v4 = *(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(v3 & 0xFFFFFFFFFFFFFFFELL);
        if ( v4 )
          v4(v1 + 4, v1 + 4, 2);
      }
      v1[3] = 0;
    }
    v5 = (_QWORD *)v1[2];
    if ( v5 )
    {
      v6 = v5[2] - 1LL;
      v5[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
    operator delete(v1);
  }
}

