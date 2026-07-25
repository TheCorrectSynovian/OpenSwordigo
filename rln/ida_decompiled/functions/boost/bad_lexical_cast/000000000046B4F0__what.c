/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B4F0
 * Mangled: _ZNK5boost16bad_lexical_cast4whatEv
 * Demangled: boost::bad_lexical_cast::what(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000046B4F0 string=0x0000000000595C8E "bad lexical cast: source type value could not be interpreted as target"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const char *__fastcall boost::bad_lexical_cast::what(boost::bad_lexical_cast *this)
{
  return "bad lexical cast: source type value could not be interpreted as target";
}

