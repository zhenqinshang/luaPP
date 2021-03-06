//2016-luaPP zukonake

#include <luaPP/element/nil.hpp>
//
#include <stdexcept>
//
#include <luaPP/luaStack.hpp>

using namespace LPP;

Nil::Nil( const LuaStack& luaStack, const Index& index ) :
	StackElement( luaStack, index )
{
	if( luaStack.getType( index ) != LuaType::NIL )
	{
		throw std::runtime_error( "LW::Nil::Nil: tried to convert a non-nil lua type to nil" );
	}
}
