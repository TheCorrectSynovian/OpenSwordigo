/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203770
 * Mangled: ._ZSt9terminatev
 * Demangled: std::terminate(void)
 *
 * Callers: 18
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000051CEB0  __cxa_allocate_exception
 *   0x000000000051D074  __cxa_allocate_dependent_exception
 *   0x000000000051D244  __cxa_begin_catch
 *   0x000000000051D2E4  __cxa_end_catch
 *   0x000000000051D518  __cxa_get_globals
 *   0x000000000051D9B4  __gxx_personality_v0
 *   0x000000000051E058  __cxxabiv1::__unexpected(void (*)(void))
 *   0x000000000051E108  __cxa_throw
 *   0x000000000051E194  __cxa_rethrow
 *   0x000000000051E6AC  __cxa_pure_virtual
 *   0x000000000051E6CC  __cxa_deleted_virtual
 *   0x000000000052CFDC  sub_52CFDC
 *   0x000000000052D268  sub_52D268
 *   0x000000000054F334  sub_54F334
 *   0x000000000054F5C0  sub_54F5C0
 *   0x000000000056FCFC  sub_56FCFC
 *   0x000000000056FF98  std::rethrow_exception(std::__exception_ptr::exception_ptr)
 *
 * Callees: 1
 *   0x000000000051E048  std::terminate(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203778 string=0x000000000020377C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __noreturn std::terminate(void)
{
  _ZSt9terminatev();
}

