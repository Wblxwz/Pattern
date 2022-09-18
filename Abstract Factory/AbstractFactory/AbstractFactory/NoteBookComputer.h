#pragma once

namespace notebook
{
	class NoteBookComputer
	{
	public:
		virtual void Create() = 0;
		virtual ~NoteBookComputer() = default;
	};
}

