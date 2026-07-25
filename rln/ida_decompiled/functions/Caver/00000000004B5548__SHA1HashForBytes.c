/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B5548
 * Mangled: _ZN5Caver16SHA1HashForBytesEPKhm
 * Demangled: Caver::SHA1HashForBytes(uchar const*,ulong)
 *
 * Callers: 1
 *   0x00000000001FBFD0  Caver::SHA1HashForBytes(uchar const*,ulong)
 *
 * Callees: 12
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F4420  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_month> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x0000000000200070  std::exception::~exception()
 *   0x00000000004B5698  boost::gregorian::bad_month::bad_month(void)
 *   0x000000000054A3F8  sub_54A3F8
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 28
 *   insn=0x00000000004B5554 string=0x00000000004B5558 "S"
 *   insn=0x00000000004B5558 string=0x00000000004B555C "i"
 *   insn=0x00000000004B5564 string=0x00000000005973D1 "<SHA1 not implemented>"
 *   insn=0x00000000004B5574 string=0x00000000004B5578 "h"
 *   insn=0x00000000004B5584 string=0x00000000004B5598 "N"
 *   insn=0x00000000004B5598 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004B55B8 string=0x00000000001F9460 "0'"
 *   insn=0x00000000004B55BC string=0x00000000004B55C0 ""
 *   insn=0x00000000004B55C8 string=0x00000000004B55CC " !"
 *   insn=0x00000000004B55CC string=0x00000000004B55D0 "A"
 *   insn=0x00000000004B55E8 string=0x00000000004B55EC ")"
 *   insn=0x00000000004B55EC string=0x00000000004B55F0 ""
 *   insn=0x00000000004B55F8 string=0x00000000004B55FC "(A"
 *   insn=0x00000000004B55FC string=0x00000000004B5600 ")"
 *   insn=0x00000000004B5614 string=0x00000000004B5618 "a"
 *   insn=0x00000000004B5614 string=0x00000000001F4420 "P'"
 *   insn=0x00000000004B561C string=0x00000000004B5620 "!<E"
 *   insn=0x00000000004B5620 string=0x00000000004B5624 "B"
 *   insn=0x00000000004B5630 string=0x00000000001FB4A0 "0'"
 *   insn=0x00000000004B5648 string=0x00000000004B564C ""
 *   insn=0x00000000004B5650 string=0x00000000004B5654 "A"
 *   insn=0x00000000004B5660 string=0x00000000004B5664 "\t"
 *   insn=0x00000000004B5664 string=0x00000000004B5668 ")"
 *   insn=0x00000000004B566C string=0x00000000004B5670 " "
 *   insn=0x00000000004B5674 string=0x00000000004B5678 "`S"
 *   insn=0x00000000004B567C string=0x00000000004B5680 "h"
 *   insn=0x00000000004B5688 string=0x00000000001F41F0 "P'"
 *   insn=0x00000000004B5694 string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::SHA1HashForBytes@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "<SHA1 not implemented>");
}

