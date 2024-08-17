CREATE TABLE person (
    name_first TEXT NOT NULL,
    name_last TEXT,
    id INTEGER PRIMARY KEY,
    dob TEXT NOT NULL
);
CREATE INDEX dob_index ON person(dob);