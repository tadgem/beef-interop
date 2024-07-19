using System;
using System.Collections;
namespace beef_interop_lib;

class Lib
{
	[LinkName("PrintHello")]
	public static extern void PrintHello();

	[Export]
	[LinkName(.C)]
	public static void SayHello()
	{
		PrintHello();
		Console.WriteLine("... and Hello From Beef!");
	}
}