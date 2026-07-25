/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B808
 * Mangled: _ZN5boost10shared_ptrIN5Caver23StoreController_AndroidEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::StoreController_Android>::shared_ptr<Caver::StoreController_Android>(Caver::StoreController_Android *)
 *
 * Callers: 1
 *   0x00000000001F68A0  boost::shared_ptr<Caver::StoreController_Android>::shared_ptr<Caver::StoreController_Android>(Caver::StoreController_Android *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x000000000047B820 string=0x000000000047B824 "o"
 *   insn=0x000000000047B824 string=0x000000000047B828 "i"
 *   insn=0x000000000047B824 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000047B828 string=0x000000000047B82C ")yD"
 *   insn=0x000000000047B838 string=0x000000000047B83C "(A"
 *   insn=0x000000000047B840 string=0x000000000047B844 ""
 *   insn=0x000000000047B85C string=0x000000000047B860 "<"
 *   insn=0x000000000047B864 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000047B868 string=0x000000000047B86C "h"
 *   insn=0x000000000047B86C string=0x000000000047B870 ""
 *   insn=0x000000000047B880 string=0x000000000047B884 "C"
 *   insn=0x000000000047B884 string=0x00000000001FD590 "0'"
 *   insn=0x000000000047B894 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::shared_ptr<Caver::StoreController_Android>::shared_ptr<Caver::StoreController_Android>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // x0

  *a1 = a2;
  a1[1] = 0;
  v4 = operator new(0x20u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v4 = &off_6D50D8;
  a1[1] = v4;
  boost::detail::sp_enable_shared_from_this();
}

