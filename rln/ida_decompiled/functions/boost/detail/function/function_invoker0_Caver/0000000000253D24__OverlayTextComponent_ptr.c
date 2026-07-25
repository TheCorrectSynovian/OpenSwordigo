/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000253D24
 * Mangled: _ZN5boost6detail8function17function_invoker0IPFPN5Caver20OverlayTextComponentEvEPNS3_9ComponentEE6invokeERNS1_15function_bufferE
 * Demangled: boost::detail::function::function_invoker0<Caver::OverlayTextComponent * (*)(void),Caver::Component *>::invoke(boost::detail::function::function_buffer &)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::function::function_invoker0<Caver::OverlayTextComponent * (*)(void),Caver::Component *>::invoke(
        __int64 (**a1)(void))
{
  return (*a1)();
}

