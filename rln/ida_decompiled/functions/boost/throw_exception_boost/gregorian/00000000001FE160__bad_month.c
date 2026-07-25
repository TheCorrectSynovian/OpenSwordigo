/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE160
 * Mangled: ._ZN5boost15throw_exceptionINS_9gregorian9bad_monthEEEvRKT_
 * Demangled: boost::throw_exception<boost::gregorian::bad_month>(boost::gregorian::bad_month const&)
 *
 * Callers: 1
 *   0x00000000004B8E28  boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(tm * (*)(long const*,tm *))
 *
 * Callees: 1
 *   0x00000000004B5548  Caver::SHA1HashForBytes(uchar const*,ulong)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE168 string=0x00000000001FE16C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::throw_exception<boost::gregorian::bad_month>()
{
  JUMPOUT(0x4B55A0);
}

