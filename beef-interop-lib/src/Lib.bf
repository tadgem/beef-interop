using System;
namespace beef_interop_lib;

class Lib
{
	[LinkName("PrintHello")]
	public static extern void PrintHello();

	[Export]
	public static void SayHello()
	{
		PrintHello();
		Console.WriteLine("... and Hello From Beef!");
	}
}