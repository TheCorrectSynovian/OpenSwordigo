/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B7160
 * Mangled: _ZN5boost6detail12shared_countC2INS_6random16mersenne_twisterIjLi32ELi624ELi397ELi31ELj2567483615ELi11ELi7ELj2636928640ELi15ELj4022730752ELi18ELj3346425566EEEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>(boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *)
 *
 * Callers: 2
 *   0x0000000000200150  boost::detail::shared_count::shared_count<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>(boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *)
 *   0x00000000004B7098  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>> const&)
 *
 * Callees: 7
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x00000000004B717C string=0x00000000004B7180 "i"
 *   insn=0x00000000004B717C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004B7180 string=0x00000000004B7184 ")"
 *   insn=0x00000000004B7190 string=0x00000000004B7194 "(A"
 *   insn=0x00000000004B7198 string=0x00000000004B719C ""
 *   insn=0x00000000004B71B0 string=0x00000000004B71B4 "s"
 *   insn=0x00000000004B71B0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004B71B4 string=0x00000000004B71C0 "l."
 *   insn=0x00000000004B71B8 string=0x00000000004B71BC "="
 *   insn=0x00000000004B71BC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004B71C8 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004B71D0 string=0x00000000004B71D4 "^\"
 *   insn=0x00000000004B71D4 string=0x00000000004B71D8 "6"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<boost::random::mersenne_twister<unsigned int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6D72D0;
  *a1 = v4;
  return result;
}

