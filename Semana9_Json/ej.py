import json
from types import SimpleNamespace

data = '''{
    "imagingA": [
        [
            639,
            909,
            793
        ],
        [
            13,
            772,
            786
        ],
        [
            888,
            330,
            726
        ]
    ],
    "imagingB": [
        [
            700,
            997,
            753
        ],
        [
            79,
            406,
            905
        ],
        [
            874,
            85,
            643
        ]
    ],
    "fileName": "1f4501af.tsv",
    "operation": "add"
}'''

# Parse JSON en un objecto con los atributos correspondientes.
x = json.loads(data, object_hook=lambda d: SimpleNamespace(**d))
print(x.imagingA, x.fileName, x.operation)