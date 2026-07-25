/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000247174
 * Mangled: _ZN5Caver16ComponentManagerC2Ev
 * Demangled: Caver::ComponentManager::ComponentManager(void)
 *
 * Callers: 2
 *   0x00000000001F9EF0  Caver::ComponentManager::ComponentManager(void)
 *   0x00000000002470AC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000247190 string=0x0000000000247194 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentManager::ComponentManager(Caver::ComponentManager *this)
{
  __int64 result; // x0

  *(_OWORD *)((char *)this + 8) = 0u;
  result = (__int64)this + 8;
  *(_OWORD *)(result + 16) = 0u;
  *(_QWORD *)(result + 24) = result;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 16) = result;
  *(_OWORD *)(result + 48) = 0u;
  *(_OWORD *)(result + 72) = 0u;
  *(_QWORD *)(result + 64) = result + 48;
  *(_QWORD *)(result + 72) = result + 48;
  return result;
}

